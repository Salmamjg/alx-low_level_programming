#include <string.h>

char *_strpbrk(char *s, char *accept)
{
    while (*s) {
        if (strchr(accept, *s)) {
            return s;
        }
        s++;
    }
    return NULL;
}
