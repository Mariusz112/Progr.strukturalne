#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	float a,b,c,d,root1,root2;
	cout<<"podaj  a, b i c : ";
	cin>>a>>b>>c;

	d=b*b-4*a*c;

	if(d==0)
	{
		root1=(-b)/(2*a);
		root2=root1;
		cout<<"niewiadome sa poprawne i rowne";
  	}
	else if(d>0)
	{
		root1=-(b+sqrt(d))/(2*a);
		root2=-(b-sqrt(d))/(2*a);
		cout<<"niewiadome sa poprawne i rozne";
	}
	else
	{
		root1=(-b)/(2*a);
		root2=sqrt(-d)/(2*a);
		cout<<"niewiadome sa urojone";
	}

	cout<<"\nRoot 1= "<<root1<<"\nRoot 2= "<<root2;


	return 0;
}
