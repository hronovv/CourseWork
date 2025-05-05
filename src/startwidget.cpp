#include "startwidget.h"

#include "menuwidget.h"

StartWidget::StartWidget(QWidget *parent) : QWidget(parent) {
    auto mainLayout = new QHBoxLayout(this);
    mainLayout->setAlignment(Qt::AlignLeft);
    mainLayout->setSpacing(kStartMenuSpacing);

    auto* pregameLayout = new QVBoxLayout();
    pregameLayout->setContentsMargins(kStartMenuLeftRightMargins,kStartMenuTopBottomMargins,
        kStartMenuLeftRightMargins,kStartMenuTopBottomMargins);
    pregameLayout->setSpacing(kStartMenuLayoutSpacing);
    pregameLayout->setAlignment(Qt::AlignTop | Qt::AlignLeft);

    auto* startConfigurationLabel = new QLabel("Initial Conditions",this);
    startConfigurationLabel->setAlignment(Qt::AlignCenter);
    startConfigurationLabel->setStyleSheet(labelHeaderStyle);
    pregameLayout->addWidget(startConfigurationLabel);

    auto* humanLabel = new QLabel(this);
    QPixmap pixmap("/Users/hronov/Documents/CourseWork/img/male_female.png");
    pixmap.setDevicePixelRatio(devicePixelRatioF());
    humanLabel->setPixmap(pixmap.scaled(kMaleFemaleLabelWidth, kMaleFemaleLabelHeight, Qt::KeepAspectRatio,
        Qt::SmoothTransformation));;
    humanLabel->setStyleSheet(kPictureLabelStyle);


    pregameLayout->addWidget(humanLabel);

    auto* genderLabel = new QLabel("Gender:", this);
    genderLabel->setStyleSheet(labelTextStyle);
    pregameLayout->addWidget(genderLabel);

    auto* genderComboBox = new QComboBox(this);
    genderComboBox->addItems({"Male", "Female"});
    genderComboBox->setStyleSheet(comboBoxStyle);
    pregameLayout->addWidget(genderComboBox);

    auto* difficultyLabel = new QLabel("Difficulty:", this);
    difficultyLabel->setStyleSheet(labelTextStyle);
    pregameLayout->addWidget(difficultyLabel);

    auto* difficultyComboBox = new QComboBox(this);
    difficultyComboBox->addItems({"Easy", "Medium", "Hard"});
    difficultyComboBox->setStyleSheet(comboBoxStyle);
    pregameLayout->addWidget(difficultyComboBox);

    auto* diseaseLabel = new QLabel("Disease:",this);
    diseaseLabel->setStyleSheet(labelTextStyle);
    pregameLayout->addWidget(diseaseLabel);

    auto* diseaseComboBox = new QComboBox(this);
    diseaseComboBox->addItems({
        "Flu",
        "COVID-19",
        "Diabetes",
        "Hypertension",
        "Cancer",
        "Asthma",
        "Alzheimer’s disease"
    });
    diseaseComboBox->setStyleSheet(comboBoxStyle);
    pregameLayout->addWidget(diseaseComboBox);

    auto* ageLabel = new QLabel("Age group:", this);
    ageLabel->setStyleSheet(labelTextStyle);
    pregameLayout->addWidget(ageLabel);

    auto* ageComboBox = new QComboBox(this);
    ageComboBox->addItems({"Child", "Teenager", "Adult", "Elderly"});
    ageComboBox->setStyleSheet(comboBoxStyle);
    pregameLayout->addWidget(ageComboBox);


    sideEffectsLabel_ = new QLabel(this);
    pregameLayout->addWidget(sideEffectsLabel_);

    auto* backButton = new QPushButton("Back to Menu", this);
    backButton->setStyleSheet(buttonStyle);
    pregameLayout->addWidget(backButton);

    auto* line = new QFrame(this);
    line->setFrameShape(QFrame::VLine);
    line->setStyleSheet(LineStyle);
    line->setFixedWidth(kLineWidth);

    auto* line1 = new QFrame(this);
    line1->setFrameShape(QFrame::VLine);
    line1->setStyleSheet(LineStyle);
    line1->setFixedWidth(kLineWidth);

    auto* simulationLayout = new QVBoxLayout();
    simulationLayout->setContentsMargins(kStartMenuLeftRightMargins, kStartMenuTopBottomMargins,
        kStartMenuLeftRightMargins, kStartMenuTopBottomMargins);
    simulationLayout->setSpacing(kStartMenuLayoutSpacing);
    simulationLayout->setAlignment(Qt::AlignTop | Qt::AlignLeft);


    auto* simulationSettingsLabel = new QLabel("About Disease", this);
    simulationSettingsLabel->setAlignment(Qt::AlignLeft);
    simulationSettingsLabel->setStyleSheet(labelHeaderStyle);
    simulationLayout->addWidget(simulationSettingsLabel);

    auto* diseaseImageLabel = new QLabel(this);
    diseaseImageLabel->setFixedSize(kDiseaseLabelWidth, kDiseaseLabelHeight);
    diseaseImageLabel->setScaledContents(true);
    diseaseImageLabel->setStyleSheet(kPictureLabelStyle);
    simulationLayout->addWidget(diseaseImageLabel);

    auto* diseaseDescriptionLabel = new QLabel(this);
    diseaseDescriptionLabel->setWordWrap(true);
    diseaseDescriptionLabel->setMaximumWidth(kDiseaseLabelWidth);
    diseaseDescriptionLabel->setStyleSheet(labelTextStyle);
    simulationLayout->addWidget(diseaseDescriptionLabel);

    connect(backButton, &QPushButton::clicked, this, &StartWidget::backButtonClicked);
    mainLayout->addLayout(pregameLayout);
    mainLayout->addWidget(line);
    mainLayout->addLayout(simulationLayout);
    mainLayout->addWidget(line1);
    setLayout(mainLayout);


    diseaseComboBox->setCurrentText("Flu");
    QPixmap pixmap_default(kDiseaseImages.value("Flu"));
    diseaseImageLabel->setPixmap(pixmap_default);
    diseaseDescriptionLabel->setText(kDiseaseDescriptions.value("Flu"));

    connect(diseaseComboBox, &QComboBox::currentTextChanged, this, [=](const QString& disease) {
        QPixmap capture_pixmap(kDiseaseImages.value(disease));
        diseaseImageLabel->setPixmap(capture_pixmap);
        diseaseDescriptionLabel->setText(kDiseaseDescriptions.value(disease));
    });


}

void StartWidget::updateSideEffectsStatus(bool sideEffectsEnabled) {
    side_effects_enabled = sideEffectsEnabled;
    sideEffectsLabel_->setText("Side effects from medications enabled - " + QString(side_effects_enabled ? "✅" : "❌"));
}
