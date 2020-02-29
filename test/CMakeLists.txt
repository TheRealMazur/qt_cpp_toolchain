include(GoogleTest)

set(BINARY ${CMAKE_PROJECT_NAME}_test)

file(
  GLOB_RECURSE TEST_SOURCES
  LIST_DIRECTORIES false
  *.h *.cpp)

set(SOURCES ${TEST_SOURCES})

add_executable(${BINARY} ${TEST_SOURCES})

target_link_libraries(
  ${BINARY}
  PRIVATE project_warnings project_options
  PUBLIC ${CMAKE_PROJECT_NAME}_lib CONAN_PKG::gtest)

target_include_directories(${BINARY} PRIVATE ${CONAN_GTEST_ROOT}/include)

gtest_discover_tests(
  ${BINARY}
  TEST_PREFIX
  "unittests."
  EXTRA_ARGS
  -s
  --reporter=xml
  --out=tests.xml)
