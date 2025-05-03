#ifndef SETTINGSWIDGET_H
#define SETTINGSWIDGET_H

#include "../include/common.h"
#include "../include/constants.h"
#include "../include/qstyles.h"

class SettingsWidget : public QWidget {
    Q_OBJECT

public:
    explicit SettingsWidget(QWidget *parent = nullptr);

    signals:
        void backButtonClicked();

};

#endif // SETTINGSWIDGET_H
