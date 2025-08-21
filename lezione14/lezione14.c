/*
Structurs
with a program that calculates fractions
*/

#include <stdio.h>
#include <stdlib.h>

/*
Internal Layout:
* +----+----+-+
* |num |den |c|
* +----+----+-+

* We now talk about struct dimensions if i add another feature to the struct that would take 1 bit it grab 3 bits of padding 
* so we now have 1 + 3 because the next feature that may be add MUST be initialize at a multiple of 4 bit

* +----+----+----+
* |num |den |abcd|
* +----+----+----+

* the memory is now 12 and i add a - b - c - d
* The order needs to be correct if not the memeory is icrasing in the spot maybe to have

* +----+----+----+----+
* |bPPP|num |den |aPPP|
* +----+----+----+----+

* the memory is now 16 and i add a - b

*there are strategy to modify the structurs to not have this type of behavior but we study it in onother lesson

*/

struct fract {
    int num;
    int den;
};

/*
Creating a new fraction setting num and den as the numerator and denominator 
The function return Null on out of memory otherwise the fraction object is returned.
*/
struct fract *create_fraction(int num, int den) { 
    struct fract *f = malloc(sizeof(*f));
    if (f == NULL) return NULL; //Malloc error checking
    f->num = num;
    f->den = den;
    return f;
}

/*
Simplify the provided fraction
*/

void simplify_fraction(struct fract *f) {
    for (int d = 2; d <= f->num && d <= f->den; d++) {
        while (f->num % d == 0 && f->den % d == 0) {
            f->num /= d;
            f->den /= d;
        }
    }
}

void print_fraction(struct fract *f) {
    printf("%d/%d", f->num, f->den);
}

int main(void) {
    struct fract *f1 = create_fraction(10,20);
    struct fract *f2 = create_fraction(1,2);
    simplify_fraction(f1);
    print_fraction(f1);
    printf("\n");
    print_fraction(f2);

    return 0;
}
