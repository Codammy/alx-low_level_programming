#ifndef _HEADER_
#define _HEADER_
#define MAXSIZE 10
#include <stdlib.h>
extern int stack[MAXSIZE];
extern int top;
extern int maxItem;
void push();
void pop();
void display();
#endif
