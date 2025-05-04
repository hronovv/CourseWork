#include "startwidget.h"

StartWidget::StartWidget(QWidget *parent) : QWidget(parent) {
    auto mainLayout = new QHBoxLayout(this);
    mainLayout->setAlignment(Qt::AlignLeft);
    mainLayout->setSpacing(kStartMenuSpacing);

    auto* pregameGridLayout = new QGridLayout();
    pregameGridLayout->setContentsMargins(kStartMenuLeftRightMargins,kStartMenuTopBottomMargins,
        kStartMenuLeftRightMargins,kStartMenuTopBottomMargins);
    pregameGridLayout->setSpacing(kStartMenuLayoutSpacing);
    pregameGridLayout->setAlignment(Qt::AlignTop | Qt::AlignLeft);

    auto* startConfigurationLabel = new QLabel("Initial Conditions",this);
    startConfigurationLabel->setAlignment(Qt::AlignCenter);
    startConfigurationLabel->setStyleSheet(labelHeaderStyle);
    pregameGridLayout->addWidget(startConfigurationLabel,0,0);

    auto* humanLabel = new QLabel(this);
    QPixmap pixmap("/Users/hronov/Documents/CourseWork/img/male_female.png");
    pixmap.setDevicePixelRatio(devicePixelRatioF());
    humanLabel->setPixmap(pixmap.scaled(kMaleFemaleLabelWidth, kMaleFemaleLabelHeight, Qt::KeepAspectRatio,
        Qt::SmoothTransformation));;
    humanLabel->setStyleSheet(humanLabelStyle);


    pregameGridLayout->addWidget(humanLabel, 1, 0);

    auto* genderLabel = new QLabel("Gender:", this);
    genderLabel->setStyleSheet(labelTextStyle);
    pregameGridLayout->addWidget(genderLabel, 2, 0);

    auto* genderComboBox = new QComboBox(this);
    genderComboBox->addItems({"Male", "Female"});
    genderComboBox->setStyleSheet(comboBoxStyle);
    pregameGridLayout->addWidget(genderComboBox, 3, 0);

    auto* difficultyLabel = new QLabel("Difficulty:", this);
    difficultyLabel->setStyleSheet(labelTextStyle);
    pregameGridLayout->addWidget(difficultyLabel, 4, 0);

    auto* difficultyComboBox = new QComboBox(this);
    difficultyComboBox->addItems({"Easy", "Medium", "Hard"});
    difficultyComboBox->setStyleSheet(comboBoxStyle);
    pregameGridLayout->addWidget(difficultyComboBox, 5, 0);

    auto* diseaseLabel = new QLabel("Disease:",this);
    diseaseLabel->setStyleSheet(labelTextStyle);
    pregameGridLayout->addWidget(diseaseLabel, 6, 0);

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
    pregameGridLayout->addWidget(diseaseComboBox,7,0);

    auto* ageLabel = new QLabel("Age group:", this);
    ageLabel->setStyleSheet(labelTextStyle);
    pregameGridLayout->addWidget(ageLabel, 8, 0);

    auto* ageComboBox = new QComboBox(this);
    ageComboBox->addItems({"Child", "Teenager", "Adult", "Elderly"});
    ageComboBox->setStyleSheet(comboBoxStyle);
    pregameGridLayout->addWidget(ageComboBox, 9, 0);


    sideEffectsLabel_ = new QLabel(this);
    pregameGridLayout->addWidget(sideEffectsLabel_, 10, 0);

    auto* backButton = new QPushButton("Back to Menu", this);
    backButton->setStyleSheet(buttonStyle);
    pregameGridLayout->addWidget(backButton, 11, 0);

    auto* line = new QFrame(this);
    line->setFrameShape(QFrame::VLine);
    line->setStyleSheet(StartLayoutLineStyle);
    line->setFixedWidth(kStartMenuLineWidth);

    auto* simulationGridLayout = new QGridLayout();
    simulationGridLayout->setContentsMargins(kStartMenuLeftRightMargins, kStartMenuTopBottomMargins,
        kStartMenuLeftRightMargins, kStartMenuTopBottomMargins);
    simulationGridLayout->setSpacing(kStartMenuSpacing);
    simulationGridLayout->setAlignment(Qt::AlignTop | Qt::AlignLeft);


    auto* simulationSettingsLabel = new QLabel("About Disease",this);
    simulationSettingsLabel->setAlignment(Qt::AlignCenter);
    simulationSettingsLabel->setStyleSheet(labelHeaderStyle);
    simulationGridLayout->addWidget(simulationSettingsLabel,0,0);


    connect(backButton, &QPushButton::clicked, this, [this]() {
        emit backButtonClicked();
    });



    mainLayout->addLayout(pregameGridLayout);
    mainLayout->addWidget(line);
    mainLayout->addLayout(simulationGridLayout);
    setLayout(mainLayout);
}

void StartWidget::updateSideEffectsStatus(bool sideEffectsEnabled) {
    side_effects_enabled = sideEffectsEnabled;
    sideEffectsLabel_->setText("Side effects from medications enabled - " + QString(side_effects_enabled ? "✅" : "❌"));
}
