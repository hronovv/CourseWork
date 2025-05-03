#ifndef STACKEDWIDGET_H
#define STACKEDWIDGET_H

#include "../include/common.h"
#include "../include/constants.h"
#include "../include/qstyles.h"
#include "menuwidget.h"
#include "settingswidget.h"
#include "startwidget.h"

class StackedWidget : public QStackedWidget {
    Q_OBJECT

public:
    explicit StackedWidget(QWidget *parent = nullptr);

private:
    std::unique_ptr<MenuWidget> menuWidget_;
    std::unique_ptr<SettingsWidget> settingsWidget_;
    std::unique_ptr<StartWidget> startWidget_;
};

#endif // STACKEDWIDGET_H
