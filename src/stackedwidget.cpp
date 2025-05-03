#include "stackedwidget.h"

StackedWidget::StackedWidget(QWidget *parent) : QStackedWidget(parent) {
    menuWidget = std::make_unique<MenuWidget>(this);
    settingsWidget = std::make_unique<SettingsWidget>(this);

    addWidget(menuWidget.get());
    addWidget(settingsWidget.get());
    // addWidget();

    setCurrentIndex(kMenuIndex);

    connect(menuWidget.get(), &MenuWidget::settingsButtonClicked, this, [this]() {
    setCurrentIndex(kSettingsIndex);
    });

    connect(settingsWidget.get(), &SettingsWidget::backButtonClicked, this, [this]() {
    setCurrentIndex(kMenuIndex);
    });

    connect(menuWidget.get(), &MenuWidget::startButtonClicked, this, [this]() {
    setCurrentIndex(kStartIndex);
    });

}


