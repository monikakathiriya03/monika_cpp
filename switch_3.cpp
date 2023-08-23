#include<iostream>
using namespace std;
int main()
{
    int j,k,l;
    char i;
    cin >> i >> j >> k;
    switch(i)
    {
        case '+':
        l=j+k;
        cout << l;
        break;
        case '-':
        l=j-k;
        cout << l;
        break;
        case '*':
        l=j*k;
        cout << l;
        break;
        case '/':
        l=j/k;
        cout << l;
        break;
        case '%':
        l=j%k;
        cout << l;
        break;
    }
}