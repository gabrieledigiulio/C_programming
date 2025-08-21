#include <stdio.h>

void conta_new (int start, int end) {
iterate:
    if (start > end) return;
    printf("%d\n", start);
    start = start+1;
    goto iterate;
}

int main(void) {
    conta_new(0,9);

    int i = 0;
    for (; ;) {
        if(i >= 10) {
            break;
        }
        printf("%d\n", i);
        i++;
    }

    while (1) {
        if(i >= 10) {
            break;
        }
        printf("%d\n", i);
        i++;
    }
    
    int a[] = {1,2,8,3,5,10,0};
    int x;
    for (x = 0; a[x] != 0; x++) {
        printf("%d\n", a[x]);
        if (a[x] == 8) {
            break;
        }
    }

    if (a[x] == 0) {
        printf("Not Found!!\n");
    } else{
        printf("Found!!\n");
    }


    int z = 5;
    switch(z) {
        case 5: {
            printf("z is 5\n");
            int h = 0;
            printf("i is %d\n", h); break;
        }
        case 8: printf("z is 8\n"); break;
        default: printf("z is someting\n"); break;
    }


    return 0;
}