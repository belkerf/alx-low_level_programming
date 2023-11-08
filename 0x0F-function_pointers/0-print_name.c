#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - function that print a name
 * @name : the name we want to print
 * @f : the pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
