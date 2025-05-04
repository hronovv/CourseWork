#include "qstyles.h"

const QString buttonStyle = R"(
    QPushButton {
        background-color: #D8CFC4;  /* Фоновый цвет кнопки - бежевый */
        border: 2px solid #B89E7D;  /* Более темная рамка */
        color: black;
        padding: 12px 24px;
        font-size: 18px;
        font-weight: bold;  /* Жирный шрифт */
        border-radius: 12px;  /* Округленные края */
    }
    QPushButton:hover {
        background-color: #B89E7D;  /* Изменение фона при ховере - темный бежевый */
        border-color: #9E7B52;  /* Темная рамка при ховере */
    }
    QPushButton:pressed {
        background-color: #9E7B52;  /* Цвет при нажатии */
        border-color: #7A5C3F;  /* Очень темная рамка при нажатии */
    }
)";

const QString widgetBackgroundStyle = R"(
    QWidget {
        background-color: #F4E1D2;  /* Светлый бежевый фон для виджета */
    }
)";

const QString textStyle = R"(
    font-size: 17px;
    color: #2E2E2E;  /* Темный почти черный цвет текста */
)";

const QString labelTextStyle = R"(
    font-size: 17px;
    color: #FFFFFF;  /* Белый цвет текста */
)";

const QString labelHeaderStyle = R"(
    font-size: 20px;
    font-weight: bold;
    color: #FFFFFF;  /* Белый цвет текста */
)";


const QString textEditStyle = R"(
    font-size: 17px;
    background-color: #FFFFFF;  /* Белый фон для текстовых полей */
    color: #2E2E2E;  /* Темный текст */
    border: 2px solid #D8CFC4;  /* Бежевый цвет рамки */
    border-radius: 5px;
)";

const QString StartLayoutLineStyle = R"(
    background-color: white;
)";
