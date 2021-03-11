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
  void przepisz(struct trojkat troj1, struct trojkat *troj2){
  *troj2=troj1;
  }
int main()
{
    cout << "podaj boki trojkata ";
    cin >> a >> b>>c;
    obwod1 = (a+b+c);
    cout << "obwod to" << obwod1 << '\n';
//nie wiem jak to zrobiæ

    return 0;
}
