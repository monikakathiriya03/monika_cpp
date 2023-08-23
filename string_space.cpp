#include<iostream>
using namespace std;
int main()
{
    char a[100]="skill",b[100]="qode",i,j;
    cout << a;
    cout << b;
    for(i=0;a[i]!='\0';i++);
    a[i]=' ';
    i++;
     for(j=0;b[j]!='\0';j++)
     {
        a[i]=b[j];
        i++;
     }
     a[i]!='\0';
     cout << "\t";
     cout << a;

}