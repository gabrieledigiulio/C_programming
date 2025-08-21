/*

Prefixed string pt. 2

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*

Initialize a prefixed length string with the specified string init of lenght len.
The created strings have the following layout:

+----+----+------------\\\
|LLLL|CCCC| My string here
+----+----+-------------\\\

Where L is one unsigned byte statg the total lenght of the string. 
Thus this strings are binary safe: zero bytes are permitted in the middle.

Warning: this function does not check for buffer overflows.

The idea is to create a string with the current sequence:

LLLLHello World\0

where L is the len of the strig
and \0 indicate to terminate the string to the program.

*/

char* ps_create(char *init, int len) {
    char *s = malloc(4+len+1);
    uint32_t *lenptr = (uint32_t*)s;
    uint32_t *count = (uint32_t*)(s+4);
    *lenptr = len;

    s += 8;
    for (int j = 0; j < len; j++) {
        s[j] = init[j]; // We should use memcopy() here.
    }

    s[len] = 0;

    return s;
}

/*

Display the string 's' on the screen.

*/

void ps_print(char *s) {
    uint32_t *lenptr = (uint32_t*)(s-4);
    for (int j = 0; j < *lenptr; j++) {
        putchar(s[j]);
    }
    printf("\n");
}

/*

Free a previous created PS string.

*/
void ps_free(char *s){
    free(s-4);
}

/*

Return the lenght of the string in 0(1) time.

*/

uint32_t ps_len(char *s) {
    uint32_t *lenptr = (uint32_t*)(s-4);
    return *lenptr;
}


/*

Function main.

*/

char *global_string;

int main(void) {
    char *mystr = ps_create("Hello WorldHello WorldHello World", 33);
    global_string = mystr;
    ps_print(mystr);
    ps_print(mystr);
    printf("%s %d\n", mystr, (int)ps_len(mystr));
    ps_free(mystr);
    printf("%saaa\n", global_string);
    return 0;
}