#include <stdio.h>


void conta(int start, int end) {
    printf("starts has %p and end has %p\n", &start, &end); //tanta memoria di stack
    if (start > end) return;
    printf("%d\n", start);
    conta(start+1, end);
}


int main(void) {
    int i = 0;
    /*
    if (i > 3){
        printf("int > 3\n");
    }else{
        printf("int < 3\n");
    }

    */

    /*
    if (i > 3) printf("int > 3\n");
    */
    
    /*
    {
        int i = 3; // questa variabile locale è viva solo all'interno del blocco 
        printf("i is %d\n", i);
        printf("i (%zu bytes) is stored at %p\n", sizeof(i), &i);
    }
    
    {
        int i = 6; // questa variabile locale è viva solo all'interno del blocco 
        printf("i is %d\n", i);
        printf("i (%zu bytes) is stored at %p\n", sizeof(i), &i);
    }

    printf("i is %d\n", i);
    printf("i (%zu bytes) is stored at %p\n", sizeof(i), &i);
    
    */
    

again:
    printf("%d\n", i);
    i++;
    if (i < 10) goto again;

    printf("...............\n");

    i = 0;
    while(i < 10) {
        printf("%d\n", i);
        i++;
    }

    printf("...............\n");

    i = 0;
    loop: 
    if (!(i<10)) goto next;
        printf("%d\n", i);
        i++;
        goto loop;
    next:

    conta(0,9);
    
    return 0;


}

