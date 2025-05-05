#ifndef AUTHORWIDGET_H
#define AUTHORWIDGET_H

#include "../include/common.h"
#include "../include/constants.h"
#include "../include/qstyles.h"

class AuthorWidget : public QWidget {
    Q_OBJECT

public:
    explicit AuthorWidget(QWidget *parent = nullptr);

    signals:
        void backButtonClicked();
};


#endif //AUTHORWIDGET_H
