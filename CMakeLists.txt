cmake_minimum_required(VERSION 3.30)
project(CourseWork)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
  Core
  Gui
  Widgets
  REQUIRED)

add_executable(CourseWork src/main.cpp
        include/common.h
        include/constants.h
        src/window.cpp
        src/window.h
        include/qstyles.h
        include/qstyles.cpp
        src/menuwidget.h
        src/menuwidget.cpp
        src/settingswidget.cpp
        src/settingswidget.h
        src/stackedwidget.cpp
        src/stackedwidget.h
        src/startwidget.cpp
        src/startwidget.h)
target_link_libraries(CourseWork
  Qt::Core
  Qt::Gui
  Qt::Widgets
)

