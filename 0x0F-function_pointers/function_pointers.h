#ifndef FUNC_H
#define FUNC_H
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size-t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
