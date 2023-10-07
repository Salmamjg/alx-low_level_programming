#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *t;
    unsigned int i = 0, j = 0, length1 = 0, length2 = 0;

    while (s1 != NULL && s1[length1] != '\0')
        length1++;
    while (s2 != NULL && s2[length2] != '\0')
        length2++;

    if (n < length2)
        t = malloc(sizeof(char) * (length1 + n + 1));
    else
        t = malloc(sizeof(char) * (length1 + length2 + 1));

    if (!t)
        return (NULL);

    while (i < length1)
    {
        t[i] = s1[i];
        i++;
    }

    while (n < length2 && i < (length1 + n))
    {
        t[i] = s2[j];
        i++;
        j++;
    }

    while (n >= length2 && i < (length1 + length2))
    {
        t[i] = s2[j];
        i++;
        j++;
    }

    t[i] = '\0';

    return (t);
}
