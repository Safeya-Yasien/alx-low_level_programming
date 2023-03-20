#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/*
 * File: 3-function_like_macro.h
 * Desc: Header file that defines a function-like macro ABS(x)
 *       that computes the absolute value of a number x.
 */

#define ABS(x) if (x < 0) \
	printf("%d", -x); \
	else \
	printf("%d", x);

#endif
