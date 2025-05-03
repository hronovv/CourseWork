#ifndef STARTWIDGET_H
#define STARTWIDGET_H


#include "../include/common.h"
#include "../include/constants.h"
#include "../include/qstyles.h"

class StartWidget : public QWidget {
    Q_OBJECT
public:
    explicit StartWidget(QWidget *parent = nullptr);
    void updateSideEffectsStatus(bool sideEffectsEnabled);
    signals:
    void backButtonClicked();
private:
    bool side_effects_enabled;
    QLabel* sideEffectsLabel_;
};

#endif // STARTWIDGET_H
