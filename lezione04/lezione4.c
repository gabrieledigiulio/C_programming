//lezione sui tipi int
#include <stdio.h>
#include <limits.h>
#include <stdint.h>


int main(void) {
    /*
    uint64_t 
    int64_t
    size_t

    intptr_t
    uintptr_t

    */
   

    char c = 1; //intero a 8 bit, 1 byte.
    short s = 2000; // 16 bit, 2 bytes.
    int x = 5; // 32 bit, 4 bytes.
    long l = 10; // in un processere di 64 bit sarà di 64 bit in un procesore a 32 bit sarà 32 bit.

    //perchè così tanti tipi
    // char => array e stringhe
    // short => numeri piccoli
    // long o uint_64_t => numeri molto grandi senza andare in overflow

    printf("Long is %llu bytes\n", sizeof(l));
    printf("Hello World: int min %d, int max %d bytes\n", INT_MIN, INT_MAX);

    return 0;
}