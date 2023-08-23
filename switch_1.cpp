#include<iostream>
using namespace std;
int main()
{
    char input ='f';
    cin >> input;
    switch(input)
    {
        case 'a':
        cout << "excellent";
        break;

        case 'b':
        cout << "verygood";
        break;

        case 'c':
        cout << "good";
        break;

        case 'd':
        cout << "not bad";
        break;
         
    }
}