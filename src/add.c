#include "add.h"
#include <stdarg.h>

int add(int count, ...) {
    va_list arg_ptr;
    va_start(arg_ptr, count);
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        int tmp = va_arg(arg_ptr, int);
        sum += tmp;
    }
    va_end(arg_ptr);
    return sum;
}
