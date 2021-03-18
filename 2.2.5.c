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
    int n;
    printf("Porgram policzy wartosc, liczby 2 podniesionej do n. Podaj liczbe calkowita:");
    scanf("%d", &n);
    printf("2 podniesione do potegi n rownego %d = %d\n", n, int_pow(2,n));

    return 0;
}
