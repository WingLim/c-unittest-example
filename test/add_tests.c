#include "test.h"
#include "add.h"

static void test_add_1(void **state) {
    int sum = add(1, 1);
    assert_int_equal(1, sum);
}

static void test_add_2(void **state) {
    int sum = add(2, 1, 2);
    assert_int_equal(3, sum);
}

static void test_add_more(void **state) {
    int sum = add(6, 1, 2, 3, 4, 5, 6);
    assert_int_equal(21, sum);
}

int run_all_tests() {
    const struct CMUnitTest tests[] = {
            cmocka_unit_test(test_add_1),
            cmocka_unit_test(test_add_2),
            cmocka_unit_test(test_add_more),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}