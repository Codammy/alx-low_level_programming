#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stddef.h>
void comma(const char * const format, size_t i);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
