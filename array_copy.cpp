#include<iostream>
using namespace std;
 int main()
 {
    int a[5]={2,3,6,8,5},b[5];
    int i;
    for(i=0;i<=4;i++)
    {
        b[i]=a[i];
        cout << b[i];
    }
 }