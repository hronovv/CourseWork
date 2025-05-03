#include "startwidget.h"

StartWidget::StartWidget(QWidget *parent) : QWidget(parent) {
    auto* start_layout_ = new QVBoxLayout(this);
    start_layout_->addWidget(new QLabel("Simulation started..."));

    auto* backButton = new QPushButton("Back to Menu", this);
    backButton->setStyleSheet(buttonStyle);
    start_layout_->addWidget(backButton);

    connect(backButton, &QPushButton::clicked, this, [this]() {
        emit backButtonClicked();
    });
}
