#include <stdlib.h>
#include "stringutils.h"

static const int MAX_LEN = sizeof(int)+3;

// Caller is responsible for freeing the returned array.
char *stringutils_num2hex(int n)
{
    int d = 1, i = 2, l = 0, a;
    char *hex = (char *) malloc(MAX_LEN);
    hex[0] = '0';
    hex[1] = 'x';
    hex[MAX_LEN-1] = '\0';
    do hex[i++] = (a = ((n >> (sizeof(int)*8-sizeof(int)*d++)) & 0x0f)) > 9 ? a + 55 : a + '0';
    while (++l < 8);
    return hex;
}

