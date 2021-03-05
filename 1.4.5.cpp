#include <iostream>

using namespace std;

int main()
{
int n,i, suma=1;
printf("podaj liczbe calkowita n");
scanf("%d", &n);
for(i=2; i<=n; i++)
    suma +=i*i;
printf("Suma kwadratow liczb dla n %d wynosi %d\n", n, suma);

return 0;
}
