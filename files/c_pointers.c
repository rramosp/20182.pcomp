#include <stdio.h>

int main(int argc, char **argv) {
    printf ("Sizes of data types (and pointers to)\n");
    char _char;           char *ptr_char = &_char;
    int _int;             int *ptr_int = &_int;
    short _short;         short *ptr_short = &_short;
    unsigned int _uint;   unsigned int *ptr_uint = &_uint;
    long _long;           long *ptr_long = &_long;
    unsigned long _ulong; unsigned long *ptr_ulong = &_ulong;
    float _float;         float *ptr_float = &_float;
    double _double;       double *ptr_double =&_double;
    long double _ldouble; long double *ptr_ldouble = &_ldouble;

    printf ("  char          %d, %d\n", sizeof(char), sizeof(ptr_char));
    printf ("  int           %d, %d\n", sizeof(int), sizeof(ptr_int));
    printf ("  short         %d, %d\n", sizeof(short), sizeof(ptr_short));
    printf ("  unsigned int  %d, %d\n", sizeof(unsigned int), sizeof(ptr_uint));
    printf ("  long          %d, %d\n", sizeof(long), sizeof(ptr_long));
    printf ("  unsigned long %d, %d\n", sizeof(unsigned long), sizeof(ptr_ulong));
    printf ("  float         %d, %d\n", sizeof(float), sizeof(ptr_float));
    printf ("  double        %d, %d\n", sizeof(double), sizeof(ptr_double));
    printf ("  long double   %d, %d\n", sizeof(long double), sizeof(ptr_double));
    printf ("\n");

    printf ("Usage of pointers and unsigned data\n");    
    double dn = 10.3045;
    char   cn = 10;
    float  fn = -12.34;
    long double ldn = 10432.12;

    double *ptr_dn = &dn;
    char   *ptr_cn = &cn;
    float  *ptr_fn = &fn;
    long double *ptr_ldn = &ldn;
    printf ("  value of vars         %f, %d, %f, %f\n", dn, cn, fn, ldn);
    printf ("  value of pointed vars %f, %d, %f, %f\n", *ptr_dn, *ptr_cn, *ptr_fn, *ptr_ldn);
    printf ("  value of pointers     %u, %u, %u, %u\n", ptr_dn, ptr_cn, ptr_fn, ptr_ldn);
    printf ("\n");

    printf ("Usage of arrays\n");
    int aint[3] = {9,3,902};
    double adouble[3] = {3.5,6.7,0.354};
    aint[2] = 9021;
    *(aint+1) = 21;
    printf ("   elements by number          %d %d %d %d %f %f\n", aint[0], aint[1], *(aint+1), aint[2], adouble[2], *(adouble+2));
    printf ("   int elements by pointers    %d %d %d %d\n", aint, &aint[0], &aint[1], &aint[2]);
    printf ("   double elements by pointers %u %u %u %u\n", adouble, &adouble[0], &adouble[1], &adouble[2]);
    return 0; 

}