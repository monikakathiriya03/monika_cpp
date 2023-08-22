#include<iostream>
using namespace std;
int main()
{
    int i=1,j,n;
    cin >> n;
    do{
        j=1;
        while(j<=i)
        {
            cout << j;
            j++;
        }
        cout << "\n";
        i++;
    }while(i<=n);
}

