#include "menuwidget.h"

MenuWidget::MenuWidget(QWidget *parent) : QWidget(parent) {
    auto* menuLayout = new QVBoxLayout(this);
    menuLayout->setAlignment(Qt::AlignCenter | Qt::AlignTop);
    menuLayout->setSpacing(kMenuLayoutSpacing);

    auto* mainSimulationLabel = new QLabel("Welcome to the simulator of diseases!", this);
    mainSimulationLabel->setStyleSheet(mainLabelStyle);
    mainSimulationLabel->setAlignment(Qt::AlignCenter);
    menuLayout->addWidget(mainSimulationLabel);

    auto* contentLayout = new QHBoxLayout();
    contentLayout->setSpacing(kMenuLayoutSpacing/2);
    contentLayout->setAlignment(Qt::AlignCenter);

    auto* descriptionLabel = new QLabel(this);
    descriptionLabel->setWordWrap(true);
    descriptionLabel->setText(kDescription);
    descriptionLabel->setStyleSheet(descriptionTextStyle);
    contentLayout->addWidget(descriptionLabel);

    auto* line = new QFrame(this);
    line->setFrameShape(QFrame::VLine);
    line->setStyleSheet("background-color: white;");
    line->setFixedWidth(kStartMenuLineWidth);
    contentLayout->addWidget(line);

    auto* buttonLayout = new QVBoxLayout();
    buttonLayout->setAlignment(Qt::AlignTop);

    auto* settingsButton = new QPushButton("Pro settings⚙️", this);
    settingsButton->setFixedSize(kSettingsButtonWidth, kSettingsButtonHeight);
    settingsButton->setStyleSheet(buttonStyle);
    buttonLayout->addWidget(settingsButton);

    auto* startButton = new QPushButton("Start🧬️", this);
    startButton->setFixedSize(kSettingsButtonWidth, kSettingsButtonHeight);
    startButton->setStyleSheet(buttonStyle);
    buttonLayout->addWidget(startButton);

    contentLayout->addLayout(buttonLayout);
    menuLayout->addLayout(contentLayout);

    connect(settingsButton, &QPushButton::clicked, this, [this]() {
        emit settingsButtonClicked();
    });

    connect(startButton, &QPushButton::clicked, this, [this]() {
        emit startButtonClicked();
    });
}
