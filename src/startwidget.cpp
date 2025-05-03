#include "startwidget.h"
#include <QVBoxLayout>
#include <QLabel>

StartWidget::StartWidget(QWidget *parent) : QWidget(parent) {
    auto* layout = new QVBoxLayout(this);
    layout->addWidget(new QLabel("Simulation started..."));
}
