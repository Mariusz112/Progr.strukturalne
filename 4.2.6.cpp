#include <iostream>

using namespace std;
void przepisz (unsigned int n, int * tab1, int * tab2){
int i;
for(i=0;i<n;i++)
    tab2[i]=tab1[i];
}
void przepiszodwrotnie (unsigned int n, int * tab1, int * tab2){
int i;
for(i=0;i<n;i++)
    tab2[i]=tab1[i-1];
}
int main()
{

    return 0;
}
