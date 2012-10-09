cmake_minimum_required (VERSION 2.6)
project (Toyproj1)

# Project variables that need to be defined manually
SET(LIB_MAJOR 0)
SET(LIB_MINOR 6)
SET(LIB_RELEASE 6)
SET(APPLICATION_DATE 2012-09-06)
SET(APPLICATION_EXE_NAME Toyproj1)

# Auto defined project variables
SET(APPLICATION_NAME "${PROJECT_NAME}")
SET(APPLICATION_MAIN_VERSION "${LIB_MAJOR}.${LIB_MINOR}.${LIB_RELEASE}")


# Needed/optional packages definitions
FIND_PACKAGE(Qt4 4.7.0 COMPONENTS QtCore QtGui QtOpenGL QtXml QtDeclarative QtSql QtSvg REQUIRED)


INCLUDE_DIRECTORIES( 
                ${QT_INCLUDE_DIR}
                ${CMAKE_SOURCE_DIR}
                ${CMAKE_BINARY_DIR}
               )


SET(Totproj1_SOURCES main.cpp firstwidget.cpp)
SET(Toyproj1_HEADERS firstwidget.h)


add_executable(Toyproj1 main.cpp)

