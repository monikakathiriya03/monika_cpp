// a b c d ... x y z print usinf goto.
#include<iostream>
using namespace std;
int main()
{
    char i=97;
    vijay:
         if(i<=122)
         {
            cout << i << "\t";
            i++;
            goto vijay;
            }
}