#include "window.h"

Window::Window(QWidget *parent) : QWidget(parent) {
    stackedWidget = std::make_unique<StackedWidget>(this);

    auto* layout = new QVBoxLayout(this);
    layout->addWidget(stackedWidget.get());
}

