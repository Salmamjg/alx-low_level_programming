char *_strncpy(char *dest, char *src, int n)
{
    char *dest_start = dest;

    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    // If n is greater than the length of src, fill the remaining dest with null bytes
    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    return dest_start;
}
