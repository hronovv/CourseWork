#include "stackedwidget.h"

StackedWidget::StackedWidget(QWidget *parent) : QStackedWidget(parent) {
    menuWidget_ = std::make_unique<MenuWidget>(this);
    settingsWidget_ = std::make_unique<SettingsWidget>(this);
    startWidget_ = std::make_unique<StartWidget>(this);


    addWidget(menuWidget_.get());
    addWidget(settingsWidget_.get());
    addWidget(startWidget_.get());

    setCurrentIndex(kMenuIndex);

    connect(menuWidget_.get(), &MenuWidget::settingsButtonClicked, this, [this]() {
    setCurrentIndex(kSettingsIndex);
    });

    connect(settingsWidget_.get(), &SettingsWidget::backButtonClicked, this, [this]() {
    setCurrentIndex(kMenuIndex);
    });

    connect(menuWidget_.get(), &MenuWidget::startButtonClicked, this, [this]() {
        setCurrentIndex(kStartIndex);
    });

    connect(startWidget_.get(), &StartWidget::backButtonClicked, this, [this]() {
        setCurrentIndex(kMenuIndex);
    });


}


