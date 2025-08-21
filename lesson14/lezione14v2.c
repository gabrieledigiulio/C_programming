/*
Structurs
with a program that calculates fractions
version with return of a structur and then without malloc anche free
*/

#include <stdio.h>
#include <stdlib.h>


struct fract {
    int num;
    int den;
};

/*
Creating a new fraction setting num and den as the numerator and denominator.
Now it returns the struct by value (no heap, no NULL).
*/
struct fract create_fraction(int num, int den) { 
    struct fract f;
    f.num = num;
    f.den = den;
    return f;
}

/*
Simplify the provided fraction (by value) and return the simplified one.
*/
struct fract simplify_fraction(struct fract f) {
    for (int d = 2; d <= f.num && d <= f.den; d++) {
        while (f.num % d == 0 && f.den % d == 0) {
            f.num /= d;
            f.den /= d;
        }
    }
    return f;
}

void print_fraction(struct fract f) {
    printf("%d/%d", f.num, f.den);
}

int main(void) {
    struct fract f1 = create_fraction(10, 20);
    struct fract f2 = create_fraction(1, 2);

    f1 = simplify_fraction(f1);
    print_fraction(f1);
    printf("\n");
    print_fraction(f2);
    printf("\n");

    return 0;
}
