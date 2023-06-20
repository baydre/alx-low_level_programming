#ifndef FUNC_LIKE_MACRO_H
#define FUNC_LIKE_MACRO_H
/*
 * preprocessor, Task 3: function-like macro ABS(x) that computes
 * the absolute value of a number x.
 */

#include <stdlib.h>

#define ABS(x) ((x) < 0 ? (-(x)) : (x))

#endif
