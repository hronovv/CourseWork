#include "window.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Window window;
    window.setWindowTitle(kCourseWorkName);
    window.resize(kWindowSize, kWindowSize);
    window.show();
    return a.exec();
}
