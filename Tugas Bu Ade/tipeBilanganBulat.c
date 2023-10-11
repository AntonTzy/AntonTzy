#include<stdio.h>
int main(){
    int Celcius, Fahrenheit;

    printf("berikan temperatur celcius: ");
    scanf("%d", &Celcius);
    Fahrenheit = (9* Celcius)/5 + 32;
    printf("%d celcius = %d fahrenheit.\n", Celcius, Fahrenheit);

    return 0;
}