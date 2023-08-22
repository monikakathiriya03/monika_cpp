#include<iostream>
using namespace std;
int main()
{
    int l,b,d;
    cin >> l >> b;
    d=l*b;
    cout << d;
    if(d>45)
    {
        cout << "right";
    }else
    {
        cout << "wrong";
    }

}