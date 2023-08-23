#include<iostream>
using namespace std;
void one();
void one()
{
    int sum=0,i,n;
    cin >> n;
     for(i=0;i<=n;i++)
     {
        cin >> i;
        sum=sum+i;
     }
     cout << sum;
}

   int main()
   {
    one();
   }