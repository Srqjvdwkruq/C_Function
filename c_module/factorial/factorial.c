// ไฟล์: factorial.c
#include "factorial.h"

factorial(n) {
    int x;
    int fac = 1;
    for (x = 2; x <= n; ++x)
        fac *= x;
}
