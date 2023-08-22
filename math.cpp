#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int newnum,num,decimal=0,binary,base=1,i=1;
    cout <<" enter the number with 0s and 1s ";
    cin >> num;
     while(num>0)
     {
        //base=pow(2,i);
        newnum=num%10;
        decimal=decimal+newnum*base;
        num=num/10;
        base= pow(2,i);
        i++;

     }
     //cout << binary << "\n";
     cout << decimal;
}