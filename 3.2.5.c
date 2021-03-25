#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int wskaznika = &a;
    int wskaznikb = &b;
    scanf("%d", &a);
    scanf("%d", &b);

    int suma(int *a, int  *b, int c){
    int e=wskaznika;
    int d=wskaznikb;
    c=e+d;
    return c;
    }
    printf(wskaznika);
    printf(suma,"%d,%p.");
    printf("\n");
    printf(c);
    printf("\n");

    return 0;
}
