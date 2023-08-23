#include<iostream>
using namespace std;
void sum();
void sum(int num)
{
 int rev=0,rem;
 while(num!=0)
 {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
 }
 cout << rev;
}
 
  int main()
  {
    int a;
    cin >> a;
    sum(a);
  }