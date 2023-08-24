// A B C D E ...X Y Z PRINT USING CONTINUE
#include<iostream>
using namespace std;
int main()
{
    for(char i=65;i<=90;i++)
    {
        if(i==5||i==13)
        {
            continue;
        }
        cout << i <<"\t";
}
}