#include "stackedwidget.h"

StackedWidget::StackedWidget(QWidget *parent) : QStackedWidget(parent) {
    menuWidget_ = std::make_unique<MenuWidget>(this);
    settingsWidget_ = std::make_unique<SettingsWidget>(this);
    startWidget_ = std::make_unique<StartWidget>(this);

    addWidget(menuWidget_.get());
    addWidget(settingsWidget_.get());
    addWidget(startWidget_.get());

    setCurrentWidget(menuWidget_.get());


    connect(menuWidget_.get(), &MenuWidget::settingsButtonClicked, this, [this]() {
        animateWidgetTransition(settingsWidget_.get());
        setCurrentWidget(settingsWidget_.get());
    });

    connect(settingsWidget_.get(), &SettingsWidget::backButtonClicked, this, [this]() {
        animateWidgetTransition(menuWidget_.get());
        setCurrentWidget(menuWidget_.get());
    });

    connect(menuWidget_.get(), &MenuWidget::startButtonClicked, this, [this]() {
        startWidget_->updateSideEffectsStatus(settingsWidget_->isSideEffectsEnabled());
        animateWidgetTransition(startWidget_.get());
        setCurrentWidget(startWidget_.get());
    });

    connect(startWidget_.get(), &StartWidget::backButtonClicked, this, [this]() {
        animateWidgetTransition(menuWidget_.get());
        setCurrentWidget(menuWidget_.get());
    });
}

void StackedWidget::animateWidgetTransition(QWidget* targetWidget) {
    QWidget* current = this->currentWidget();
    if (current == targetWidget)
        return;

    QGraphicsOpacityEffect* currentEffect = new QGraphicsOpacityEffect(current);
    current->setGraphicsEffect(currentEffect);

    QGraphicsOpacityEffect* targetEffect = new QGraphicsOpacityEffect(targetWidget);
    targetWidget->setGraphicsEffect(targetEffect);
    targetEffect->setOpacity(0.0);

    this->setCurrentWidget(targetWidget);

    auto* fadeOut = new QPropertyAnimation(currentEffect, "opacity");
    fadeOut->setDuration(kAnimationWidgetDurationMs);
    fadeOut->setStartValue(1.0);
    fadeOut->setEndValue(0.0);

    auto* fadeIn = new QPropertyAnimation(targetEffect, "opacity");
    fadeIn->setDuration(kAnimationWidgetDurationMs);
    fadeIn->setStartValue(0.0);
    fadeIn->setEndValue(1.0);

    fadeOut->start(QAbstractAnimation::DeleteWhenStopped);
    fadeIn->start(QAbstractAnimation::DeleteWhenStopped);
}