#ifndef MENUWIDGET_H
#define MENUWIDGET_H

#include "../include/common.h"
#include "../include/constants.h"
#include "../include/qstyles.h"
#include "settingswidget.h"

class MenuWidget : public QWidget {
    Q_OBJECT

public:
    explicit MenuWidget(QWidget *parent = nullptr);

    signals:
        void settingsButtonClicked();
        void startButtonClicked();
};


#endif // MENUWIDGET_H
