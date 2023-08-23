#include<iostream>
using namespace std;
void perfect();
void perfect()
{
    int i,sum=0,r,num;
    cin >> num;
     for(i=1;i<=num;i++)
     {
        if(num%i==0)
        {
            sum=sum+i;
        }
     }
     if((sum/2)==num)
     {
        cout << "perfect number";
     }else
     {
        cout << "not perfect";
     }
}

    
    int main()
    {
        perfect();
        
    }