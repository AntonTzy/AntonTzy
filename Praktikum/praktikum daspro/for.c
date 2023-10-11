#include <stdio.h>

int main(){
   //for
    for (int i = 0; i < 7; i++)
    {
        printf("hello world\n");
    }
    //while
    int banyak = 1;
    while (banyak < 5)
    {
        printf("Hello world ke-%d", banyak);
        banyak++;
    }

    //do_while
    int angka = 4;
    do
    {
       printf("hello world\n");
       angka++;
    } while (angka < 10);
    
    //increment

    int a = 7;
    //pre-increment
    int b = ++a;
    printf("a = %d\n",a);
    printf("b = %d\n\n",b);

    int c = 5;
    //post increment
    int d = c++;
    printf("c = %d\n",c);
    printf("d = %d", d);

    return 0;

    
}