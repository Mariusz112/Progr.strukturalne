#include <iostream>

using namespace std;
void przepiszdotab3 (unsigned int n, int * tab1, int * tab2, int * tab3){
int i;
for(i=0;i<n;i++)
    tab3[i]=tab1[i]+tab2[i];
}

void porownajdotab3 (unsigned int n, int * tab1, int * tab2, int * tab3){
int i;
for(i=0;i<n;i++)
    if (tab1[i]>tab2[i])
    tab3[i]=tab1[i];
    else
    if (tab1[i]<tab2[i])
    tab3[i]=tab2[i];
    else
    if (tab1[i]==tab2[i])
    tab3[i]=tab2[i];
}
void przepisztablice (unsigned int n, int * tab1, int * tab2, int * tab3){
int i;
    for(i=0;i<n;i++)
    tab1[i]=tab2[i];
    for(i=0;i<n;i++)
    tab2[i]=tab3[i];
    for(i=0;i<n;i++)
    tab3[i]=tab1[i];
}

int main()
{

    return 0;
}
