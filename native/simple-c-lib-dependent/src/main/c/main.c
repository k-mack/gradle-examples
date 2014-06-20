#include <stdio.h>
#include <stdlib.h>
#include "stringutils.h"

int main(void)
{
    char *hex = stringutils_num2hex(255);
    printf("255 in hex is %s\n", hex);
    free(hex);
    return 0;
}

