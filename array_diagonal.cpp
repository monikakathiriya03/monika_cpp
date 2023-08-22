#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int sum=0,i,j;
     for(i=0;i<=2;i++)
     {
        for(j=0;j<=2;j++)
        {
            cin >> a[i][j];
        }
     }
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                if(i==j)
                {
                    sum=sum+a[i][j];
                }
            }
        }
        cout << sum;
        cout << "\n";
        
}