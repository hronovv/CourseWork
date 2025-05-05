#include "authorwidget.h"

AuthorWidget::AuthorWidget(QWidget *parent) : QWidget(parent) {
    auto* menuLayout = new QVBoxLayout(this);
    menuLayout->setSpacing(kAuthorMenuLayoutSpacing);

    auto* mainLabel = new QLabel(kAuthorWelcoming, this);
    mainLabel->setAlignment(Qt::AlignCenter);
    mainLabel->setStyleSheet(mainLabelStyle);
    menuLayout->addWidget(mainLabel);

    auto* infoLayout = new QHBoxLayout();

    auto* line = new QFrame(this);
    line->setFrameShape(QFrame::VLine);
    line->setStyleSheet(LineStyle);
    line->setLineWidth(kLineWidth);
    infoLayout->addWidget(line);


    auto* authorLabel = new QLabel(kAuthorDescription, this);
    authorLabel->setAlignment( Qt::AlignVCenter | Qt::AlignLeft);
    authorLabel->setStyleSheet(labelTextStyle);
    infoLayout->addWidget(authorLabel);


    menuLayout->addLayout(infoLayout);
    menuLayout->addStretch();

    auto* backButton = new QPushButton("Back to Menu", this);
    backButton->setStyleSheet(buttonStyle);
    menuLayout->addWidget(backButton, 0, Qt::AlignHCenter);

    setLayout(menuLayout);

    connect(backButton, &QPushButton::clicked, this, &AuthorWidget::backButtonClicked);
}