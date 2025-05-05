#ifndef CONSTANTS_H
#define CONSTANTS_H
/*
 * This file contains all constant values that are needed for the course work
*/

constexpr const char* kCourseWorkName = "Simulation of diseases in the human body";

constexpr const char* kDescription =
    "Step into the body and take control!\n\n"
    "Simulation lets you explore how diseases like flu, diabetes, or cancer impact the human body "
    "based on age, gender, and difficulty level.\n\n"
    "Make real-time decisions, manage treatments, and deal with unpredictable side effects of medications.\n"
    "Watch as the body fights back — or breaks down — based on your strategy.\n\n"
    "It's an immersive, gamified journey through health, illness, and recovery, that reveals\n"
    "just how complex and fascinating the human body really is.";

constexpr const char* kPictureLabelStyle = R"(
    QLabel {
        border: 2px solid #9E7B52;
        border-radius: 10px;
        padding: 4px;
        background-color: #F6F1EC;
    }
)";

constexpr const char* kAuthorWelcoming = "About creator";
constexpr const char* kAuthorDescription =
    "Name: Ivan Bazan\n\n"
    "University: BSUIR\n\n"
    "Faculty: Computer Systems and Networks\n\n"
    "Specialty: Computer Science and Programming Technologies\n\n"
    "Year: 1st";



const QMap<QString, QString> kDiseaseImages = {
    {"Flu", "/Users/hronov/Documents/CourseWork/img/flu.png"},
    {"COVID-19", "/Users/hronov/Documents/CourseWork/img/covid-19.png"},
    {"Diabetes", "/Users/hronov/Documents/CourseWork/img/diabetes.png"},
    {"Hypertension", "/Users/hronov/Documents/CourseWork/img/hypertension.png"},
    {"Cancer", "/Users/hronov/Documents/CourseWork/img/cancer.png"},
    {"Asthma", "/Users/hronov/Documents/CourseWork/img/asthma.png"},
    {"Alzheimer’s disease", "/Users/hronov/Documents/CourseWork/img/alzheimer.png"},
};

const QMap<QString, QString> kDiseaseDescriptions = {
    {"Flu", "◆ Flu is a contagious respiratory illness caused by influenza viruses.\n\n◆ "
            "It spreads easily through droplets from coughs or sneezes.\n\n◆ "
            "Symptoms include fever, chills, cough, sore throat, body aches, and fatigue.\n\n◆ "
            "Flu can lead to complications like pneumonia, bronchitis, and sinus infections."},
    {"COVID-19", "◆ COVID-19 is caused by SARS-CoV-2, leading to respiratory issues.\n\n◆ "
                 "It can spread through close contact or airborne transmission.\n\n◆ "
                 "Common symptoms include fever, dry cough, and difficulty breathing.\n\n◆ "
                 "Severe cases can lead to respiratory failure and death, particularly in the elderly."},
    {"Diabetes", "◆ Diabetes is a chronic condition that affects how your body processes blood sugar.\n\n◆"
                 " It can lead to serious complications like heart disease and nerve damage.\n\n◆ "
                 "There are two main types: Type 1 (insulin-dependent) and Type 2 (insulin resistance).\n\n◆ "
                 "Uncontrolled diabetes can result in kidney damage, vision loss, and amputations."},
    {"Hypertension", "◆ Hypertension is high blood pressure that increases the risk of heart disease.\n\n◆"
                     " It often has no symptoms but can lead to severe health problems over time.\n\n◆ "
                     "If left untreated, hypertension can lead to heart attack, stroke, and kidney disease.\n\n◆ "
                     "It is often referred to as the 'silent killer' because of its lack of symptoms."},
    {"Cancer", "◆ Cancer is a group of diseases involving abnormal cell growth.\n\n◆ "
               "It can affect any part of the body and may spread to other tissues.\n\n◆ "
               "Common types include breast cancer, lung cancer, prostate cancer, and colorectal cancer.\n\n◆ "
               "Risk factors include smoking, excessive alcohol consumption, and a family history of cancer."},
    {"Asthma", "◆ Asthma is a condition in which your airways narrow and swell, producing extra mucus.\n\n◆ "
               "It can cause difficulty breathing and wheezing.\n\n◆ "
               "Triggers include allergens, respiratory infections, exercise, and cold air.\n\n◆ "
               "Asthma attacks can be life-threatening if not managed properly."},
    {"Alzheimer’s disease", "◆ Alzheimer’s disease is a progressive neurological disorder that causes brain cells to"
                            " die.\n\n◆ It leads to memory loss and cognitive decline.\n\n◆ "
                            "Symptoms include confusion, difficulty remembering recent events, and trouble speaking."
                            "\n\n◆ Alzheimer’s is the most common cause of dementia in the elderly."},
};




constexpr short kWindowSize = 1600;
constexpr short kSettingsButtonWidth = 200;
constexpr short kSettingsButtonHeight = 55;
constexpr short kAnimationWidgetDurationMs = 200;
constexpr short kTransitionOffset = 30;
constexpr short kStartMenuSpacing = 60;
constexpr short kStartMenuLeftRightMargins = 5;
constexpr short kStartMenuTopBottomMargins = 15;
constexpr short kStartMenuLayoutSpacing = 15;
constexpr short kAuthorMenuLayoutSpacing = 150;
constexpr short kMaleFemaleLabelWidth = 500;
constexpr short kMaleFemaleLabelHeight = 600;
constexpr short kDiseaseLabelWidth = 255;
constexpr short kDiseaseLabelHeight = 255;
constexpr short kLineWidth = 4;
constexpr short kMenuLayoutSpacing = 100;
constexpr short kMenuLayoutButtonSpacing = 30;

#endif //CONSTANTS_H
