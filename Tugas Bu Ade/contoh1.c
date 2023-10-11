#include <stdio.h>
#define PI 3.14155

double luas_lingkaran(float);
int main(void){
    float jari2 = 5;
    double luas;

    luas = luas_lingkaran(jari2);
    printf("Luas Lingkaran berjari-jari %.2f = %.2f\n", jari2,luas);

    return 0;
}

double luas_lingkaran(float r){
    return (PI * r * r);
}