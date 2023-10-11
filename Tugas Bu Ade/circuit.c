#include<stdio.h>
typedef double Resistance;

int main(){
    Resistance r1, r2, r3;
    double TotalR, Voltase, Arus;

    printf("Berikan TIGA Resistan (ohm): ");
    scanf("%lf %lf %lf", &r1, &r2, &r3);
    printf("Voltase yang digunakan (volt):");
    scanf("%lf", &Voltase);

    TotalR= 1.0/(1.0/r1 + 1.0/r2 + 1.0/r3);
    Arus = Voltase / TotalR;

    printf("Arusnya = %lf Amps.\n", Arus);
    return 0;
}