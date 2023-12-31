cmake_minimum_required(VERSION 3.5)

project(Feedback VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        feedbacksystem.cpp
        feedbacksystem.h
        feedbacksystem.ui
        signin.cpp
        signin.h
        signin.ui
        adminfuctions.cpp
        adminfuctions.h
        adminfuctions.ui
        viewfeedback.cpp
        viewfeedback.h
        viewfeedback.ui
        totalstudents.cpp
        totalstudents.h
        totalstudents.ui
        searchstudent.cpp
        searchstudent.h
        searchstudent.ui
        searchinform.cpp
        searchinform.h
        searchinform.ui
        searchinform2.cpp
        searchinform2.h
        searchinform2.ui

        viewfeedback.qrc
    )

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Feedback
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        signin.h signin.cpp signin.ui
        adminfuctions.h adminfuctions.cpp adminfuctions.ui
        viewfeedback.h viewfeedback.cpp viewfeedback.ui
        totalstudents.h totalstudents.cpp totalstudents.ui
        searchstudent.h searchstudent.cpp searchstudent.ui
        searchinform.h searchinform.cpp searchinform.ui
        viewfeedback.qrc
        searchinform2.h searchinform2.cpp searchinform2.ui
        searchstudent2.h searchstudent2.cpp searchstudent2.ui
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Feedback APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Feedback SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Feedback
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Feedback PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Feedback)
endif()
set_target_properties(Feedback PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Feedback
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Feedback)
endif()
