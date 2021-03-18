#include <stdio.h>

int rek(int i) {
int war=0;
   if(i == 0) {
      return 1;
   }

   if(i >= 1) {
      return war=(2*(i-1)+5);
   }

}

int  main() {
    int i,n;
    printf("Podaj liczbe calkowita rowna n ciagu");
    scanf("%d", &n);


   for (i = 0; i < n; i++) {
      printf("%d\t\n", rek(i));
   }

   return 0;
}
