#include <stdio.h>

int main()
{
    int r,t;
    printf("Masukkan Nilai Jari-Jari tabung:");
    scanf("%d",&r);
    printf("masukkan nilai tinggi tabung:");
    scanf("%d",&t);
    float p = 3.14;
    double LP,V;
    LP = 2*p*r*t+2*p*r*r;
    V = p*r*r*t;

    printf("Luas permukaan tabung anda= %f\n",LP);
    printf("Volume Tabung anda adalah: %f",V);

    
    return 0;

}