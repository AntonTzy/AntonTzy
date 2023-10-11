#include <stdio.h>
#define PI  3.1416

int main()
{
    double jari2, luas;

    printf("masukkan panjang jari jari lingkaran : ");
    scanf("%lf", &jari2);

    luas = PI * jari2*jari2;

    printf("luas lingkaran = %.2lf", luas);
    return 0;
}