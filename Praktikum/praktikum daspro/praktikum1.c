#include <stdio.h>
/*standard input output(stdio)*/
int main() {
    /*tipe data dan nama variabel
    char "b"; (1 huruf)
    int a; (bilangan bulat)
    float c; (bilangan desimal) untuk desimal yang lebih panjang menggunakan double*/
    int x;
    x = 80;
    /*atau int x = 8;*/
    

    /*operasi aritmatika seperti biasa tapi bedanya ada modulus menggunakan %*/
    int y = 12;
    int a = x+y;
    /*atau int x = 8, y = 12, a = a+b;*/
    int z= a*x;
    float e,f;
    e= 0.2;
    f= 0.5;
    float g=a*f;
    /*shift+alt+arrow atas/bawah untul shortcut copy atas bawah*/
    printf("ini adalah a %d\n",a);
    printf("ini adalah z %d\n",z);
    printf("ini adalah g %.2f",g);
    /*.2 di float untuk menunjukkan berapa0 dibelakang koma*/
    return 0;
}