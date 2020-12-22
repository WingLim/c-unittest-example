#ifndef PROJECT_TEST_H
#define PROJECT_TEST_H

#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

int run_all_tests(void);


int main() {
    return run_all_tests();
}

#endif //PROJECT_TEST_H