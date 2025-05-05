#include "authorwidget.h"

AuthorWidget::AuthorWidget(QWidget *parent) : QWidget(parent) {
    auto* menuLayout = new QVBoxLayout(this);
    menuLayout->setAlignment(Qt::AlignCenter | Qt::AlignTop);

    auto* authorLabel = new QLabel(authorDescription,this);
    authorLabel->setAlignment(Qt::AlignCenter | Qt::AlignTop);
    authorLabel->setStyleSheet(labelTextStyle);

    auto* backButton = new QPushButton("Back to Menu", this);
    backButton->setStyleSheet(buttonStyle);
    menuLayout->addWidget(backButton);

    menuLayout->addWidget(authorLabel);
    setLayout(menuLayout);

    connect(backButton, &QPushButton::clicked, this, &AuthorWidget::backButtonClicked);
}