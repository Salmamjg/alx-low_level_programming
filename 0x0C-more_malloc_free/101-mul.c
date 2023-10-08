#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string contains only digits
 * @str: the input string
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return (0);
        str++;
    }
    return (1);
}

/**
 * multiply - multiplies two positive numbers as strings
 * @num1: the first number
 * @num2: the second number
 * Return: the result as a string
 */
char *multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, len_res, i, j, carry, sum;
    char *result;

    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    len_res = len1 + len2;
    result = malloc(sizeof(char) * (len_res + 1));

    if (!result)
        return (NULL);

    for (i = 0; i < len_res; i++)
        result[i] = '0';
    result[len_res] = '\0';

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            sum = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            result[i + j + 1] = (sum % 10) + '0';
            carry = sum / 10;
        }
        result[i + j + 1] = (num1[i] - '0') * (num2[j] - '0') + carry + '0';
    }

    return (result);
}

int main(int argc, char *argv[])
{
    char *num1, *num2, *result;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    num1 = argv[1];
    num2 = argv[2];

    if (!is_digit(num1) || !is_digit(num2))
    {
        printf("Error\n");
        return (98);
    }

    result = multiply(num1, num2);

    if (!result)
    {
        printf("Error\n");
        return (98);
    }

    while (*result == '0' && *(result + 1) != '\0')
        result++;

    printf("%s\n", result);
    free(result);

    return (0);
}
