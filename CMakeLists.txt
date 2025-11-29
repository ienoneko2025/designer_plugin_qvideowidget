cmake_minimum_required(VERSION 4.2.0)
project(DesignerPluginForQVideoWidget LANGUAGES CXX)

# required by Qt 6
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets UiPlugin)

qt_wrap_cpp(QT_MOC_SRCS
  fake_qvideowidget.h
  qvideowidget_plugin.h

  TARGET qvideowidget)

add_library(qvideowidget SHARED
  ${QT_MOC_SRCS}
  fake_qvideowidget.cpp
  qvideowidget_plugin.cpp)
target_link_libraries(qvideowidget PRIVATE
  Qt6::Widgets
  Qt6::UiPlugin)

install(TARGETS qvideowidget
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/qt6/plugins/designer)
