#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n, or -1 if n is negative (error).
 */
int factorial(int n)
{
    int result = 1;  
    int i;
    if (n < 0)
        return -1; 

    if (n == 0)
        return 1;  

   

    for (i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

