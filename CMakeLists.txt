cmake_minimum_required(VERSION 3.30)
project(CourseWork)

# Установить стандарт C++
set(CMAKE_CXX_STANDARD 20)

# Автоматическая обработка MOC, UIC, RCC для Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Найти компоненты Qt6
find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

# Поиск всех исходных .cpp и .h файлов для перевода
file(GLOB_RECURSE SOURCE_FILES "*.cpp" "*.h")

# Список файлов перевода
set(TS_FILES
        /Users/hronov/Documents/CourseWork/translations/app_en.ts
        /Users/hronov/Documents/CourseWork/translations/app_ru.ts
)

# Автоматически генерируем файлы .qm из .ts
set(QM_FILES "")
foreach(_ts ${TS_FILES})
    get_filename_component(_filename ${_ts} NAME_WE)
    set(_qm translations/${_filename}.qm)
    add_custom_command(
            OUTPUT ${_qm}
            COMMAND lrelease ${_ts} -qm ${_qm}
            DEPENDS ${_ts}
            COMMENT "Generating ${_qm}"
    )
    list(APPEND QM_FILES ${_qm})
endforeach()

# Создаем цель для генерации переводов
add_custom_target(translations ALL DEPENDS ${QM_FILES})

# Основной исполняемый файл
add_executable(CourseWork
        src/main.cpp
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
        src/startwidget.h
        src/authorwidget.cpp
        src/authorwidget.h)

# Линкуем необходимые библиотеки Qt
target_link_libraries(CourseWork
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

# Убедитесь, что цель для перевода будет выполнена до сборки приложения
add_dependencies(CourseWork translations)
