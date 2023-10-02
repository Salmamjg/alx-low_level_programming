char *_strcpy(char *dest, char *src)
{
    char *dest_start = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';  // Null-terminate the destination string
    return dest_start;
}
