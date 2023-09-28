#include <string.h>

/**
 * is_palindrome_recursive - Helper function to check if a string is a palindrome recursively
 * @s: String to check
 * @start: Starting index
 * @end: Ending index
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome_recursive(char *s, int start, int end)
{
    if (start >= end)
        return 1; 

    if (s[start] != s[end])
        return 0; 

    return is_palindrome_recursive(s, start + 1, end - 1);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
    int len = strlen(s);

    if (len <= 1)
        return 1; 

    return is_palindrome_recursive(s, 0, len - 1);
}
