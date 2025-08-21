#include <stdio.h>

int sum3(int v, int x) {
    int c;
    return c = v + x;
}



int sum(int a, int b) {
    return a+b;
}

int main(void) {

    int g, h, i;

    int d = 10;
    int e = 20;
    int f = d+e;


    g = 30;
    g = g + 10;
    h = 1;
    i = 3;
    
    printf("ciaoo %d\n", sum3(10,20));

    printf("Hello World %d %d %d\n", g, h, i);

    printf("Ciaooo %d\n", f);

    printf("Hello World %d %d\n", sum(10,20), 50);
    
    return 0;
}