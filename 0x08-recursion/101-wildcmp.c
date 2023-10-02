#include <stdio.h>

int wildcmp_helper(char *s1, char *s2);

/**
 * wildcmp - Compares two strings allowing '*' as a wildcard character
 * @s1: The first string
 * @s2: The second string with '*' as a wildcard
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0')))
        return 1; // Both strings are empty, or s2 is a single '*' (identical)

    if (*s1 == '\0' || *s2 == '\0')
        return 0; // One string is empty, but not both

    if (*s1 == *s2 || *s2 == '*')
        return wildcmp_helper(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1);

    return 0; // Characters don't match
}

/**
 * wildcmp_helper - Recursive helper function for wildcmp
 * @s1: The first string
 * @s2: The second string with '*' as a wildcard
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp_helper(char *s1, char *s2)
{
    if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0')))
        return 1; // Both strings are empty, or s2 is a single '*' (identical)

    if (*s1 == '\0' || *s2 == '\0')
        return 0; // One string is empty, but not both

    if (*s1 == *s2 || *s2 == '*')
        return wildcmp_helper(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1);

    return 0; // Characters don't match
}
