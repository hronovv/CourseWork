#include "settingswidget.h"

SettingsWidget::SettingsWidget(QWidget *parent) : QWidget(parent) {
    auto* settingsLayout = new QVBoxLayout(this);

    auto* settingsLabel = new QLabel("Settings");
    settingsLabel->setStyleSheet(labelTextStyle);
    settingsLayout->addWidget(settingsLabel);

    auto* gridLayout = new QGridLayout();

    side_effects_from_medications_ = new QCheckBox("Enable side effects from medications");
    auto* checkBox2 = new QCheckBox("Option 2");
    auto* checkBox3 = new QCheckBox("Option 3");
    auto* checkBox4 = new QCheckBox("Option 4");

    gridLayout->addWidget(side_effects_from_medications_, 0, 0);
    gridLayout->addWidget(checkBox2, 0, 1);
    gridLayout->addWidget(checkBox3, 1, 0);
    gridLayout->addWidget(checkBox4, 1, 1);

    settingsLayout->addLayout(gridLayout);

    auto* backButton = new QPushButton("Back to Menu", this);
    backButton->setStyleSheet(buttonStyle);

    settingsLayout->addWidget(backButton);


    connect(backButton, &QPushButton::clicked, this, &SettingsWidget::backButtonClicked);

    settingsLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
}

bool SettingsWidget::isSideEffectsEnabled() const {
    return side_effects_from_medications_->isChecked();
}
