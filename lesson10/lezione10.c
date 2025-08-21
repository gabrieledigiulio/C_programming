#include <stdio.h>

int main(void) {
    int x = 6;
    int *y = &x;
    int **z = &y;
    
    printf("x is stored in %p and y is stored in %p and x has value of %d\n", y, z, x);

    printf("%d, %d, %d\n", (int)sizeof(x), (int)sizeof(y), (int)sizeof(z)); //tutti i puntatori sono grandi uguali 8 bytes

    char mystr[] = "Hello world";
    char *p = mystr; //qua non si scrive & perche come abbiamo visto le stringhe sono array quindi mystr rappresenta gia l'indirizzo di memoria della stringa

    printf("At %p I can see: %s\n", mystr, mystr);

    printf("%c%c\n", *p, *(p+1));

    // *p posso accedere solo al primo elemento quindi alla H con *(p+1) posso accedere al next 
    // p[] posso accedere a qualsiasi elemento del puntatore

    char mystr2[] = "AABBCCDDEEFF";
    short *g = (short*)mystr2;
    g += 4; //la matematica dei puntatori segue una matematica ovvero se io incremento o decremento un puntatore di uno questo verra moltiplicato per la grndezza
        // del tipo base del puntatore. Se short vale 2 bytes se lo incremento di 1 salto da AA arrivando a B se icremento di 2 salto AABB arrivando a C
    printf("%d\n", *g);

    printf("%d\n", g[4]);



    char *o = mystr2;
    printf("At the beginning o is %p\n", o);
    while(*o != 0) {
        putchar(*o);
        o++;
    }
    printf("\n");

    printf("At the end o is %p\n", o);

    return 0;
}