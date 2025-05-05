#ifndef STACKEDWIDGET_H
#define STACKEDWIDGET_H

#include "../include/common.h"
#include "../include/constants.h"
#include "../include/qstyles.h"
#include "menuwidget.h"
#include "settingswidget.h"
#include "startwidget.h"
#include "authorwidget.h"

class StackedWidget : public QStackedWidget {
    Q_OBJECT

public:
    explicit StackedWidget(QWidget *parent = nullptr);

    void animateWidgetTransition(QWidget* targetWidget);

private:
    std::unique_ptr<MenuWidget> menuWidget_;
    std::unique_ptr<SettingsWidget> settingsWidget_;
    std::unique_ptr<StartWidget> startWidget_;
    std::unique_ptr<AuthorWidget> authorWidget_;
};

#endif // STACKEDWIDGET_H
