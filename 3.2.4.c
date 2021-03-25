#include <stdio.h>
#include <stdlib.h>
void zamien(int * a, int * b){
    int pom;
    pom=*a;
    *a=*b;
    *b=pom;
}
int main()
{
    int a, b;
    int *wskaznika = &a;
    int *wskaznikb = &b;
    scanf("%d", &a);
    scanf("%d", &b);
    //przed modyfikacj¹
    printf("Wartosc zmiennej: %d, jej adres: %p.\n", a, &a);
    printf("Wartosc zmiennej: %d, wartosc wskazywana przez wskaznik: %d\n", a, *wskaznika);
    printf("Wartosc zmiennej: %d, jej adres: %p.\n", b, &b);
    printf("Wartosc zmiennej: %d, wartosc wskazywana przez wskaznik: %d\n", b, *wskaznikb);
    int mniejsza(int * a, int  * b, int temp){
    if (*a>*b){
        zamien(*a,*b);
        }
    else
        return 0;
    }
    //po modyfikacji
    printf(mniejsza,"%d,%p.\n");
    printf("Wartosc zmiennej: %d, jej adres: %p.\n", a, &a);
    printf("Wartosc zmiennej: %d, wartosc wskazywana przez wskaznik: %d\n", a, *wskaznika);
    printf("Wartosc zmiennej: %d, jej adres: %p.\n", b, &b);
    printf("Wartosc zmiennej: %d, wartosc wskazywana przez wskaznik: %d\n", b, *wskaznikb);


    return 0;
}
