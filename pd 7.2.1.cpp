#include <iostream>

using namespace std;
int a;
int b;
int c;
int obwod1;
 struct trojkat{
  double a,b,c;
  };
  double obwod(struct trojkat t){
  return t.a+t.b+t.c;
  }
int main()
{
    cout << "podaj boki trojkata ";
    cin >> a >> b>>c;
    obwod1 = (a+b+c);
    cout << "obwod to" << obwod1 << '\n';

    return 0;
}
