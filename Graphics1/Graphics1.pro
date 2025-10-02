QT -= core gui

TARGET = Graphics1
TEMPLATE = lib
CONFIG += dll

# Define export macro
DEFINES += GRAPHICS1_LIBRARY

# Graphics1 DLL files
SOURCES += \
    Graphics1.cpp

HEADERS += \
    Graphics1.h

# Windows specific
win32 {
    LIBS += -luser32 -lsetupapi
}

# Graphics1 DLL is already compiled
