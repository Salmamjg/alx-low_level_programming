#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
    int chr;
    
    if (n <= 0)
        _putchar('\n');
    else
    {
        for (chr = 1; chr <= n; chr++)
        {
            _putchar(95);
        }
        _putchar('\n');
    }
}
