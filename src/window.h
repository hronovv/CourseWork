#ifndef WINDOW_H
#define WINDOW_H
#include "../include/common.h"
#include "../include/constants.h"
#include "../include/qstyles.h"
#include "menuwidget.h"
#include "settingswidget.h"
#include "stackedwidget.h"

/*
 * window.h && window.cpp - basically a class that describes how GUI will be presented
 */

class Window : public QWidget {
    Q_OBJECT

public:
    explicit Window(QWidget *parent = nullptr);

private:
    std::unique_ptr<StackedWidget> stackedWidget;
};


#endif //WINDOW_H
