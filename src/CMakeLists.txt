set(BINARY ${CMAKE_PROJECT_NAME})
find_package(Qt5 REQUIRED COMPONENTS Widgets Core Gui)
set(CMAKE_AUTOMOC ON)

file(
  GLOB_RECURSE SOURCES
  LIST_DIRECTORIES true
  *.h *.cpp)

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

target_link_libraries(
  ${BINARY}_run
  PRIVATE project_warnings project_options
  PUBLIC Qt5::Core Qt5::Gui Qt5::Widgets)
target_include_directories(${BINARY}_run PRIVATE ${CONAN_INCLUDE_DIRS_QT})

add_library(${BINARY}_lib STATIC ${SOURCES})
target_link_libraries(
  ${BINARY}_lib
  PRIVATE project_warnings project_options
  PUBLIC Qt5::Core Qt5::Gui Qt5::Widgets)
target_include_directories(${BINARY}_lib PRIVATE ${CONAN_INCLUDE_DIRS_QT})
