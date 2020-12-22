include(CMocka)

include_directories(${CMOCKA_INCLUDE_DIR})

function(add_test_suite _testName)
    add_executable(${_testName} ${_testName}.c)
    target_link_libraries(${_testName} project cmocka)
    add_test(${_testName} ${CMAKE_CURRENT_BINARY_DIR}/${_testName})
endfunction()

add_test_suite(add_tests)