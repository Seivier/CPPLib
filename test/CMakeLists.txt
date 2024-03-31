if(BUILD_TESTING)
  set(CPPLIB_TESTS 
    "${PROJECT_SOURCE_DIR}/test/point_test.cc"
    "${PROJECT_SOURCE_DIR}/test/segment_test.cc"
    "${PROJECT_SOURCE_DIR}/test/triangle_test.cc"
    "${PROJECT_SOURCE_DIR}/test/circle_test.cc"
  )
  add_executable(${PROJECT_NAME}Tests ${CPPLIB_TESTS})
  target_link_libraries(${PROJECT_NAME}Tests PRIVATE GTest::gtest_main ${PROJECT_NAME})

  include(GoogleTest)
  gtest_discover_tests(${PROJECT_NAME}Tests)
endif()
