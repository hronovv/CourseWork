#include "startwidget.h"

StartWidget::StartWidget(QWidget *parent) : QWidget(parent) {

    auto* gridLayout = new QGridLayout(this);
    gridLayout->setAlignment(Qt::AlignTop | Qt::AlignLeft);

    auto* humanLabel_ = new QLabel(this);
    QPixmap pixmap("/Users/hronov/Documents/CourseWork/img/male_female.png");
    pixmap.setDevicePixelRatio(devicePixelRatioF());
    humanLabel_->setPixmap(pixmap.scaled(500, 700, Qt::KeepAspectRatio, Qt::SmoothTransformation));;
    gridLayout->addWidget(humanLabel_, 0, 0);  // Place image across two columns

    auto* genderLabel = new QLabel("Gender:", this);
    genderLabel->setStyleSheet(labelTextStyle);
    gridLayout->addWidget(genderLabel, 1, 0);

    QComboBox* genderComboBox = new QComboBox(this);
    genderComboBox->addItem("Male");
    genderComboBox->addItem("Female");
    gridLayout->addWidget(genderComboBox, 2, 0);

    sideEffectsLabel_ = new QLabel(this);
    gridLayout->addWidget(sideEffectsLabel_, 3, 0);

    auto* backButton = new QPushButton("Back to Menu", this);
    backButton->setStyleSheet(buttonStyle);
    gridLayout->addWidget(backButton, 4, 0);

    connect(backButton, &QPushButton::clicked, this, [this]() {
        emit backButtonClicked();
    });

    setLayout(gridLayout);
}

void StartWidget::updateSideEffectsStatus(bool sideEffectsEnabled) {
    side_effects_enabled = sideEffectsEnabled;
    sideEffectsLabel_->setText("Side effects from medications enabled - " + QString(side_effects_enabled ? "✅" : "❌"));
}
