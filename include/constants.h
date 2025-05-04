#ifndef CONSTANTS_H
#define CONSTANTS_H
/*
 * This file contains all constant values that are needed for the course work
*/

constexpr const char* kCourseWorkName = "Simulation of diseases in the human body";
constexpr const char* kDescription =
    "Step into the body and take control!\n\n"
    "This simulation lets you explore how diseases like flu, diabetes, or cancer impact the human body\n"
    "based on age, gender, and difficulty level.\n\n"
    "Make real-time decisions, manage treatments, and deal with unpredictable side effects of medications.\n"
    "Watch as the body fights back — or breaks down — based on your strategy.\n\n"
    "It's an immersive, gamified journey through health, illness, and recovery that reveals\n"
    "just how complex and fascinating the human body really is.";

constexpr const char* humanLabelStyle = R"(
    QLabel {
        border: 2px solid #9E7B52;
        border-radius: 10px;
        padding: 4px;
        background-color: #F6F1EC;
    }
)";


constexpr short kWindowSize = 1600;
constexpr short kSettingsButtonWidth = 200;
constexpr short kSettingsButtonHeight = 55;
constexpr short kAnimationWidgetDurationMs = 200;
constexpr short kTransitionOffset = 30;
constexpr short kStartMenuSpacing = 60;
constexpr short kStartMenuLeftRightMargins = 5;
constexpr short kStartMenuTopBottomMargins = 15;
constexpr short kStartMenuLayoutSpacing = 15;
constexpr short kMaleFemaleLabelWidth = 500;
constexpr short kMaleFemaleLabelHeight = 600;
constexpr short kStartMenuLineWidth = 4;
constexpr short kMenuLayoutSpacing = 100;

#endif //CONSTANTS_H
