// #include <stdio.h> 

//direttiva del pre processore, prima di compilare il programma ne chiama un programma distinto che processa questa direttiva
//fase precedente alla compilazioni, trasformate di testo 
//includiamo il file stdio.h file di libreria dve ci sono tutte le intestazioni delle funzioni che posso usare
//il linguaggio ha poche keyword come int while if return NON printf
//.h sta per header oppure hanno .c che sta per linguaggio c

int printf(const char * restrict format, ...);
// funziona anche senza!!


int main(void){
    #include "file.c"
    printf("Hello World\n");
    return 0;
}

