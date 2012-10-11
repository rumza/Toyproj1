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

SET(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmakemodules)


# Needed/optional packages definitions
FIND_PACKAGE(Qt4 4.7.0 COMPONENTS QtCore QtGui QtOpenGL QtXml QtDeclarative QtSql QtSvg REQUIRED)


INCLUDE(${QT_USE_FILE})

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

INCLUDE_DIRECTORIES( 
                ${QT_INCLUDE_DIR}
                ${CMAKE_SOURCE_DIR}
                ${CMAKE_BINARY_DIR}
               )
SET(QT_USE_QTOPENGL TRUE)

SET(Toyproj1_SOURCES main.cpp firstwidget.cpp)
SET(Toyproj1_HEADERS firstwidget.h)


QT4_WRAP_CPP(Toyproj1_HEADERS_MOC ${Toyproj1_HEADERS})


add_executable(Toyproj1 ${Toyproj1_SOURCES} 
    ${Toyproj1_HEADERS_MOC})
TARGET_LINK_LIBRARIES(Toyproj1 ${QT_LIBRARIES})


