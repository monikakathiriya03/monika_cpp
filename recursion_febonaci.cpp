// fibonaci serice
#include<iostream>
using namespace std;

int fibo (int);
int main ()
{
  int n, i, c = 0;
  cout << " Enter The n Term of Fibonacci Series : ";
  cin >> n;
  cout << "Fibonacci Series : ";
  for (i = 1; i <= n; i++)
    {
      cout << " \t " << fibo (c);
      c++;
    }
}

int
fibo (int n)
{
  int f;
  if (n == 0)
    {
      return 0;
    }
  else if (n == 1)
    {
      return 1;
    }
  else
    {
      f = fibo (n - 1) + fibo (n - 2);
      return f;
    }
}