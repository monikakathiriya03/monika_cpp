#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char a[100]="skill",b[100]="qode",c[100],i=0,j=0;
   cout << a;
   cout << b;
    while(a[i]!='\0')
    {
        c[j]=a[i];
        i++;
        j++;
    }i=0;
    while(b[i]!='\0')
    {
        c[j]=b[i];
        i++;
        j++;
    }
    c[j]='\0';
    cout << c;
}