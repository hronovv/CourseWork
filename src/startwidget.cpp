#include "startwidget.h"

StartWidget::StartWidget(QWidget *parent) : QWidget(parent) {
    auto* startLayout = new QVBoxLayout(this);

    sideEffectsLabel_ = new QLabel(this);
    startLayout->addWidget(sideEffectsLabel_);

    auto* backButton = new QPushButton("Back to Menu", this);
    backButton->setStyleSheet(buttonStyle);
    startLayout->addWidget(backButton);

    connect(backButton, &QPushButton::clicked, this, [this]() {
        emit backButtonClicked();
    });

    startLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
}

void StartWidget::updateSideEffectsStatus(bool sideEffectsEnabled) {
    side_effects_enabled = sideEffectsEnabled;
    sideEffectsLabel_->setText("You want to have side effects - " + QString(side_effects_enabled ? "Yes" : "No"));
}
