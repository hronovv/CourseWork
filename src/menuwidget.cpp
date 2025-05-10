#include "menuwidget.h"

MenuWidget::MenuWidget(QWidget *parent) : QWidget(parent) {
    auto* menuLayout = new QVBoxLayout(this);
    menuLayout->setAlignment(Qt::AlignCenter | Qt::AlignTop);
    menuLayout->setSpacing(kMenuLayoutSpacing);

    auto* mainSimulationLabel = new QLabel(tr("Welcome to the simulator of diseases!"), this);
    mainSimulationLabel->setStyleSheet(mainLabelStyle);
    mainSimulationLabel->setAlignment(Qt::AlignCenter);
    menuLayout->addWidget(mainSimulationLabel);

    auto* contentLayout = new QHBoxLayout();
    contentLayout->setSpacing(kMenuLayoutSpacing/2);
    contentLayout->setAlignment(Qt::AlignCenter);

    auto* descriptionLabel = new QLabel(this);
    descriptionLabel->setWordWrap(true);
    descriptionLabel->setText(tr(kDescription));
    descriptionLabel->setStyleSheet(descriptionTextStyle);
    contentLayout->addWidget(descriptionLabel);

    auto* line = new QFrame(this);
    line->setFrameShape(QFrame::VLine);
    line->setStyleSheet("background-color: white;");
    line->setFixedWidth(kLineWidth);
    contentLayout->addWidget(line);

    auto* buttonLayout = new QVBoxLayout();
    buttonLayout->setSpacing(kMenuLayoutButtonSpacing);
    buttonLayout->setAlignment(Qt::AlignTop);

    auto* settingsButton = new QPushButton(tr("Settings⚙️"), this);
    settingsButton->setFixedSize(kSettingsButtonWidth, kSettingsButtonHeight);
    settingsButton->setStyleSheet(buttonStyle);

    auto* startButton = new QPushButton(tr("Start🧬️"), this);
    startButton->setFixedSize(kSettingsButtonWidth, kSettingsButtonHeight);
    startButton->setStyleSheet(buttonStyle);

    auto* tutorialButton = new QPushButton(tr("Tutorial📚"), this);
    tutorialButton->setFixedSize(kSettingsButtonWidth, kSettingsButtonHeight);
    tutorialButton->setStyleSheet(buttonStyle);

    auto* authorButton = new QPushButton(tr("Creator✍️"), this);
    authorButton->setFixedSize(kSettingsButtonWidth, kSettingsButtonHeight);
    authorButton->setStyleSheet(buttonStyle);

    buttonLayout->addWidget(startButton);
    buttonLayout->addWidget(tutorialButton);
    buttonLayout->addWidget(settingsButton);
    buttonLayout->addWidget(authorButton);
    contentLayout->addLayout(buttonLayout);
    menuLayout->addLayout(contentLayout);

    connect(settingsButton, &QPushButton::clicked, this, &MenuWidget::settingsButtonClicked);
    connect (startButton, &QPushButton::clicked, this, &MenuWidget::startButtonClicked);
    connect(authorButton, &QPushButton::clicked, this, &MenuWidget::authorButtonClicked);
    connect(tutorialButton, &QPushButton::clicked, this, &MenuWidget::tutorialButtonClicked);
}
