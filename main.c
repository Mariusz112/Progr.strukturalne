#include <stdio.h>

int main() {
   int a;
   int b;
   int c;
    printf("podaj a");
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   if ( a > b && a > c )
      printf(" najwi�ksza liczba to %d", a);
   else if ( b > a && b > c )
      printf(" najwi�ksza liczba to %d", b);
   else if ( c > a && c > b )
      printf("najwi�ksza liczba to %d", c);
   else if (a == b > c)
      printf(" najwi�ksza liczba to %d", a);
   else if (a == b < c)
      printf(" najwi�ksza liczba to %d", c);
   else if (a == c > b)
      printf(" najwi�ksza liczba to %d", a);
   else if (a == b < c)
      printf(" najwi�ksza liczba to %d", b);
   else if (b == c > a)
      printf(" najwi�ksza liczba to %d", b);
   else if (b == c < a)
      printf("najwi�ksza liczba to %d", a);
   else if (b == c && b == a)
      printf(" najwi�ksza liczba to %d", a);
   return 0;
}
