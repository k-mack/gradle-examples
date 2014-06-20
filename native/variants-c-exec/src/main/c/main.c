#include <stdio.h>

#ifndef NAME
#define NAME "World"
#endif

int main(void) {
    printf("Hello, %s!\n", NAME);
#ifdef DEBUG
    printf("Debugger: NAME=%s\n", NAME);
#endif
    return 0;
}
