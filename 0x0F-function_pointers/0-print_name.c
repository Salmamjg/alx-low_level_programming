#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: A function pointer that prints the name
 */
void print_name(char *name, void (*f)(char *)) {
    f(name);
}
