#include "qstyles.h"

const QString buttonStyle = R"(
    QPushButton {
        font-family: 'Orbitron';
        background-color: #D8CFC4;
        border: 2px solid #B89E7D;
        color: black;
        padding: 12px 24px;
        font-size: 18px;
        font-weight: bold;
        border-radius: 12px;
    }
    QPushButton:hover {
        background-color: #B89E7D;
        border-color: #9E7B52;
    }
    QPushButton:pressed {
        background-color: #9E7B52;
        border-color: #7A5C3F;
    }
)";

const QString widgetBackgroundStyle = R"(
    QWidget {
        background-color: #F4E1D2;
        font-family: 'Orbitron';
    }
)";

const QString textStyle = R"(
    font-family: 'Orbitron';
    font-size: 17px;
    color: #2E2E2E;
)";

const QString labelTextStyle = R"(
    font-family: 'Orbitron';
    font-size: 17px;
    color: #FFFFFF;
)";

const QString labelHeaderStyle = R"(
    font-family: 'Orbitron';
    font-size: 20px;
    font-weight: bold;
    color: #FFFFFF;
)";

const QString textEditStyle = R"(
    font-family: 'Orbitron';
    font-size: 17px;
    background-color: #FFFFFF;
    color: #2E2E2E;
    border: 2px solid #D8CFC4;
    border-radius: 5px;
)";

const QString LineStyle = R"(
    background-color: white;
)";

const QString mainLabelStyle = R"(
    font-family: 'Orbitron';
    font-size: 28px;
    font-weight: 700;
    color: white;
    letter-spacing: 1px;
)";

const QString descriptionTextStyle = R"(
    font-family: 'Open Sans';
    font-size: 18px;
    font-weight: 600;
    color: #FFFFFF;
    line-height: 1.4;
)";

const QString comboBoxStyle = R"(
    QComboBox {
        background-color: #F3EBE2;
        border: 1.5px solid #B89E7D;
        border-radius: 6px;
        padding: 4px 10px;
        font-size: 14px;
        font-family: 'Orbitron';
        color: #2E2E2E;
    }

    QComboBox:hover {
        background-color: #E9DDD2;
        border-color: #9E7B52;
    }

    QComboBox:focus {
        border: 1.5px solid #9E7B52;
        background-color: #F8F3ED;
    }

    QComboBox::drop-down {
        subcontrol-origin: padding;
        subcontrol-position: top right;
        width: 22px;
        border-left: 1px solid #B89E7D;
    }

    QComboBox::down-arrow {
        image: url(/Users/hronov/Documents/CourseWork/img/arrow_down.png);
        width: 12px;
        height: 12px;
    }

    QComboBox QAbstractItemView {
        background-color: #FFFFFF;
        selection-background-color: #D8CFC4;
        selection-color: #2E2E2E;
        border: 1px solid #B89E7D;
        font-size: 13px;
        font-family: 'Segoe UI';
    }
)";
