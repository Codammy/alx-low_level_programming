#ifndef _HEADER_
#define _HEADER_
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int ma);
#endif
