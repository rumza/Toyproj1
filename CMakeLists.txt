cmake_minimum_required (VERSION 2.6)
project (Toyproj1)
add_executable(Toyproj1 main.cpp)


SET(MyPrac_SOURCES main.cpp firstwidget.cpp)
SET(MyPrac_HEADERS firstwidget.h)



# Needed/optional packages definitions
FIND_PACKAGE(Qt4 4.7.0 COMPONENTS QtCore QtGui QtOpenGL QtXml QtDeclarative QtSql QtSvg REQUIRED)


INCLUDE_DIRECTORIES( ${QT_INCLUDE_DIR})
