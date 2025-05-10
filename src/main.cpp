#include "window.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QTranslator translator;
    translator.load("../translations/app_en.qm");
    qApp->installTranslator(&translator);

    Window window;
    window.setWindowTitle(kCourseWorkName);
    window.resize(kWindowSize, kWindowSize);
    window.show();

    return a.exec();
}
