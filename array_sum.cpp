#include<iostream>
using namespace std;
int main()
{
  int num[5];
  int i,a,s=0;
   for(i=0;i<=4;i++)
   {
    cin >> num[i];
   } 
     for(i=0;i<=4;i++)
     {
        s=s+num[i];
     }
     cout << s; 
}