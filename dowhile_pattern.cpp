#include<iostream>
using namespace std;
int main()
{
    char a=65;
    do{
        cout << a;
         if(a%3==1)
         {
            cout << "\n";
         }
         a++;
    }while(a<=88);
}