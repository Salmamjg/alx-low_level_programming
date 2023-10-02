char *_strncat(char *dest, char *src, int n)
{
    char *dest_start = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';  // Null-terminate the concatenated string
    return dest_start;
}
