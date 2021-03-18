#include <stdio.h>
#include <stdlib.h>

int int_pow(int base, int exp)
{

    int result = 1;
    while (exp)
    {
        if (exp % 2)
           result *= base;
        exp /= 2;
        base *= base;
    }
    return result;
}
int main(){
    int n, m;
    printf("Porgram policzy wartosc, liczby m podniesionej do n. Podaj liczbe calkowita u podstawy:");
    scanf("%d", &n);
    printf("Podaj liczbe calkowita rowna n");
    scanf("%d", &m);
    if ( n <= 0 && m <= 0 )
        exit(1);

    printf("n rowne %d", n);
    printf(" podniesione do potegi m rownej %d = %d\n", m, int_pow(n,m));

    return 0;
}
