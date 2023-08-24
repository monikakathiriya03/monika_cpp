// binary to decimal convert 
#include <iostream>
using namespace std;
void factorial(int num,int bainary_num,int a);
void factorial(int num,int bainary_num,int a)

{int rem;
 if(num>0)
 {
    rem=num%2;
    num=num/2;
    bainary_num=bainary_num+(rem*a);
    a=a*10;
    factorial(num,bainary_num,a);
 }else{
    cout << bainary_num; 
 }
}
int main()
{
    int num,a;
    cin >> a;
    factorial(a,0,1);
}