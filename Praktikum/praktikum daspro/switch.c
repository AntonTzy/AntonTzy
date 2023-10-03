#include <stdio.h>

int main(){
    int angka;
    printf("masukkan sebuah angka :");
    scanf("%d", &angka);

    switch(angka)
    {
    case 10:
        printf("angkanya 10");
        break;
    case 20:    
        printf("angkanya 20");
        break;
    default:
        printf("coba input lagi");
        break;
    }
return 0;
}