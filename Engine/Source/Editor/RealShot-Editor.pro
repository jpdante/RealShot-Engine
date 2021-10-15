QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Core/Render/renderer.cpp \
    ViewportWidget/ViewportWidget.cpp \
    Views/Loading/Loading.cpp \
    Views/MainEditor/MainEditor.cpp \
    Views/NewProject/NewProject.cpp \
    Views/ProjectManager/ProjectItem.cpp \
    main.cpp \
    Views/ProjectManager/ProjectManager.cpp

HEADERS += \
    Core/Render/renderer.h \
    ViewportWidget/ViewportWidget.h \
    Views/Loading/Loading.h \
    Views/MainEditor/MainEditor.h \
    Views/NewProject/NewProject.h \
    Views/ProjectManager/ProjectItem.h \
    Views/ProjectManager/ProjectManager.h

FORMS += \
    Views/Loading/Loading.ui \
    Views/MainEditor/MainEditor.ui \
    Views/NewProject/NewProject.ui \
    Views/ProjectManager/ProjectItem.ui \
    Views/ProjectManager/ProjectManager.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Images.qrc
