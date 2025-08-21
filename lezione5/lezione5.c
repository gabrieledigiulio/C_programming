#include <stdio.h>

int main(void) {

    char c = 'A';
    printf("Hello World %d \n", c);
    printf("[%s]\n", "Hello World");
    printf("[%c, %c, %c, %c]\n", 65, 66, 67, 68);

    //array

    int a[5] = {1, 2, 3, 4, 5};
    printf("%d%d%d\n", a[0], a[2], a[1]);

    char str[6] = {'h', 'e', 'l', 'l', 'o', 0}; // 0 indica che la sequenza è finita NULL TERMINATOR,  abbiamo scperto che la stringa npn è altro che un array di interi di tipo char 8 bit ciascuno da -128 a 127
    
    int i = 0;

    while(str[i] != 0) {
        printf("%c", str[i]);
        i++;
    }
    
    printf("\n");

    char str2[] = "hello";

    str2[3] = 'X';

    str2[4] = 65;

    str2[3]++;

    printf("Hello World: %s and %s\n", str, str2);
    printf("sizeof: %llu\n", sizeof(str2));


    return 0;
}