#include <stdio.h>
/*

int incr(void) {
    static int x = 0;
    x = x + 1;
    printf("%d\n", x);
}

int main(void) {
    incr();
    incr();
    incr();
    incr();

    return 0;
}

*/

int incr(int x) {
    x = x + 1;
    return x;
}

int main(void) {
    int a = 10;
    unsigned int b = 20;
    float z = 1.32123;
    unsigned char c = 254;
    int i = c + 1;
    short d = 234;

    c++; //occhio a overflow dei segni
    printf("%d\n", c);
    c++;
    //gli short vengono convertiti in int prima della printf
    //i float vengono convertiti in duble prima della printf
    a = incr(a);
    printf("%d\n", c);
    return 0;
}