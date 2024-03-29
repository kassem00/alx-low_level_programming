#ifndef FUN_POINTERS_H
#define FUN_POINTERS_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
