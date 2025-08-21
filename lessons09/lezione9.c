#include <stdio.h>

void incr(int *p) {
    *p = *p + 1; //usando l * prendi l'intero registato all'indirizzo p ci aggiungi uno e ci assegni a quella locazione di memoria il valore del risultato
    p[0] = p[0] + 1; //potevamo scrivere anche così
}

int main(void) {

    int x = 5; //variabile intera registata da qualche parte nella memoria
    int *y = NULL; //variabile intera che contiene un indirizzo di memoria di un intero

    printf("x was %d\n", x); 

    y = &x; //y è uguale all'indirizzo di memoria dove x è registrato

    printf("x is stored at the address: %p\n", y);

    *y = 10; //all'indirizzo di memoria y dove c'è un intero, scrivi 10
    y[0] = 10; //questa operazione è equivalente a quella sopra
    y[1] = 10; // cosi sto scrivendo fuori dalla memoria NON è corretto

    int z = 5;
    int *w = NULL;

    printf("z was %d\n", z); 
    w = &z; //passo alla funzione incr l'indirizzo di memoria dove è registarata z
    incr(w);
    printf("z is now %d\n", z);

    return 0;
}