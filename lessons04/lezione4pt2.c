#include <stdio.h>

void clear(void) {
    printf("\x1b[2J\x1b[H");
    // fflush(stdout);
}

int main(void) {
    clear();
    printf("Hello World\n");
    return 0;
}