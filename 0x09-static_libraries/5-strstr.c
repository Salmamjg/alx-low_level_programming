#include <string.h>

char *_strstr(char *haystack, char *needle)
{
    size_t needle_len = strlen(needle);

    while (*haystack) {
        if (strncmp(haystack, needle, needle_len) == 0) {
            return haystack;
        }
        haystack++;
    }

    return NULL;
}
