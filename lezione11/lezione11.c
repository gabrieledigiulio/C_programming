#include <stdio.h>

/*

assumiamo di avere 00010110 

2032
= 
2*10^0 +
3*10^1 +
0*10^2 +
2*10^3 =

2 + 30 + 2000

Se ho due possibilità 0 oppure 1 in base due e ho 8 posizioni posso rappresentare 2^8 combinazioni diverse = 256
Quindi numeri che vanno da 0 a 255
Infatti assumiamo di avere 11111111
Questo equivale a
128 + 64 + 32 + 16 + 8 + 4 + 2 + 1

Ma nel caso in cui abbia 2 byte?

01 01

entrambi valgono un numero da 0 a 255 ma moltiplicato per 256
Perchè?

Se io ho una sequenza di bit se la moltiplico per 2 è come aggiungere un ulteriore 1 al inizio della sequeza

02 * 256 + 02 = 514



*/

int main (void) {
    char str[] = {1,1,2,2};
    short *s = (short*)str;

    printf("%d, %d\n", s[0], s[1]);

    char str2[] = "\017Hello00\0000000123";
    char *p = str2;
    int len = *p++;
    printf("My string len is %d\n", str2[0]);
    for(int j = 0; j < len; j++) {
        putchar(p[j]);
    }
    printf("\n");

    printf("HelloWorld");
    return 0;

}



