#include <stdio.h>
#include <stdlib.h>
#include "stringutils.h"

int main(void)
{
    char *hex;
    int i;
    for (i = 0; i < 17; i++) {
        printf("%d in hex is %s\n", i, hex = stringutils_num2hex(i));
        free(hex);
    }
    return 0;
}

