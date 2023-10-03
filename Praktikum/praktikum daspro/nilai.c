#include<stdio.h>

int main(){

    int nilai;
    printf("Masukkan sebuah nilai (0-100)");
    scanf("%d",&nilai);

    if(nilai >= 90 && nilai <= 100){
        printf("Nilai kamu A");
    }
    else if(nilai >= 75 && nilai<90)
    {
        printf("nilai kamu B");
    }
    else if (nilai >= 60 && nilai < 75)
    {
        printf("nilai kamu C");
    }
    else if(nilai < 60){
        printf("nilai kamu D");
    }
    else{
        printf("Nilai yang kamu masukkan tidak valid");
    }
    return 0;
}