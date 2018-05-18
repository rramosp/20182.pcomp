#include <stdio.h>

void f(unsigned int p1, unsigned int *p2) {
    printf ("  value and memory address of p1 %d(%d)\n", p1, &p1);
    printf ("  value and memory address of p2 %d(%d)\n", *p2, p2);

    p1 = p1*2;
    *p2 = *p2 * 2;
    printf ("  changed values p1=%u, p2=%u\n", p1, *p2);
}

int main(int argc, char **argv) {
    unsigned int i1 = 10;
    unsigned int i2 = 15;
    printf ("calling function with i1=%d (%u), i2=%u(%u)\n", i1, &i1, i2, &i2);
    f (i1, &i2);
    printf ("values after function i1=%d (%u), i2=%u(%u)\n", i1, &i1, i2, &i2);
    
}