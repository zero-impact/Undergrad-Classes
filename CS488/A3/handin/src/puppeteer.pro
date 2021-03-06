######################################################################
# Automatically generated by qmake (3.0) Wed May 28 16:55:50 2014
######################################################################

macx:CONFIG -= app_bundle

QT += opengl widgets
CONFIG += c++11
QMAKE_CXXFLAGS += -W -Wall -g 
LIBS += -llua5.1 -L /usr/local/Cellar/lua51/5.1.5/lib
TEMPLATE = app
TARGET = puppeteer
INCLUDEPATH += /usr/include/lua5.1  /usr/local/Cellar/lua51/5.1.5/include/lua-5.1

# Input
HEADERS += algebra.hpp \
           lua488.hpp \
           material.hpp \
           primitive.hpp \
           scene.hpp \
           scene_lua.hpp \
           AppWindow.hpp \
           Viewer.hpp 
        

SOURCES += algebra.cpp \
           main.cpp \
           material.cpp \
           primitive.cpp \
           scene.cpp \
           scene_lua.cpp \
           AppWindow.cpp \ 
           Viewer.cpp 
