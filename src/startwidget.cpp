#include "startwidget.h"

StartWidget::StartWidget(QWidget *parent) : QWidget(parent) {
    auto* layout = new QVBoxLayout(this);
    layout->addWidget(new QLabel("Simulation started..."));
}
