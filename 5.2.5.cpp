#include<iostream>
#include<iomanip>
#include<cstring>
#include<algorithm>
//niedokoñczone
using namespace std;

struct student{
  char nazwisko[25];

  bool operator < (const student &x)const
{
    int porownaj = (strcmp(nazwisko,x.nazwisko)){
    if (nazwisko > x.nazwisko){
        return 1;
    }
    if (nazwisko < x.nazwisko){
        return 0;
  }
  }
};

int main()
{
  student studenci[] = {
    {"Topola"},
    {"Kowalski"},
  };
  cout<<"tekst przed sortowaniem: "<<endl;
  for(int i=0;i<2;i++)
    cout<<"Nazwisko: "<<studenci[i].nazwisko<<endl;

  sort(studenci,studenci+2); //sortowanie studentów

  cout<<endl;
  cout<<"tekst po sortowaniu: "<<endl;
  for(int i=0;i<2;i++)
    cout<<"Nazwisko: "<<studenci[i].nazwisko<<endl;

  return 0;
}
