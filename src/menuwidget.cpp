#include "menuwidget.h"

MenuWidget::MenuWidget(QWidget *parent) : QWidget(parent) {
    auto* menuLayout = new QVBoxLayout(this);

    auto* settingsButton = new QPushButton("Settings⚙️", this);
    settingsButton->setFixedSize(kSettingsButtonWidth, kSettingsButtonHeight);
    settingsButton->setStyleSheet(buttonStyle);

    auto* startButton = new QPushButton("Start🧬️", this);
    startButton->setFixedSize(kSettingsButtonWidth, kSettingsButtonHeight);
    startButton->setStyleSheet(buttonStyle);

    menuLayout->addWidget(settingsButton);
    menuLayout->addWidget(startButton);
    menuLayout->setAlignment(Qt::AlignCenter | Qt::AlignTop);

    connect(settingsButton, &QPushButton::clicked, this, [this]() {
        emit settingsButtonClicked();
    });

    connect(startButton, &QPushButton::clicked, this, [this]() {
    emit startButtonClicked();
    });
}
