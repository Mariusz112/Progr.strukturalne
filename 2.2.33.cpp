#include <iostream>

using namespace std;

int rek(int i) {
int a,b,c,d,e,war;
   if(i == 0 || i == 1) {
      return 0;
    }

   if(i == 2) {
      return war=a+b;

   }
      if(i == 3) {
      return war=a+b+c;

   }
      if(i == 4) {
      return war=a+b+c+d;

   }
      if(i == 5) {
      return war=a+b+c+d+e;

   }

}
int main() //nie wiem cos mi nie zwraca tego co chce
{
    int i;
    unsigned int a,b,c,d,e;
    cout << "program policzy sume 5 liczb typu int, a takze zliczy sumê dwóch, trzech i czterech argumentów." << endl;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    for (i = 0; i < 5; i++) {
      printf("%d\t\n", rek(i));
   }

    return 0;
}
