#ifndef SETTINGSWIDGET_H
#define SETTINGSWIDGET_H

#include "../include/common.h"
#include "../include/constants.h"
#include "../include/qstyles.h"

class SettingsWidget : public QWidget {
    Q_OBJECT

public:
    explicit SettingsWidget(QWidget *parent = nullptr);

    bool isSideEffectsEnabled() const;

    signals:
        void backButtonClicked();
private:
    QCheckBox* side_effects_from_medications_;
};

#endif // SETTINGSWIDGET_H
