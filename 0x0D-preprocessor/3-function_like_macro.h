#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
* File: 3-function_like_macro.h
* Desc: Header file that defines a function-like macro ABS(x).
* The macro ABS(x) computes the absolute value of a number x.
* @x: The number to compute  the absolute value
*/

#define ABS(x) (((x) < 0) ? ((x) * -1) : (x))

#endif
