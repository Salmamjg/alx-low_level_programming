char *_strcat(char *dest, char *src)
{
    char *dest_start = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';  // Null-terminate the concatenated string
    return dest_start;
}
