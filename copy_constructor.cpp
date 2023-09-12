// copy constructor
#include <iostream>
using namespace std;

class Copy
{
    int z1;
    float z2;
    char z3;
    string z4;
   

    public:
     Copy(int a, double b, char c, string d)
    
    {
      z1 = a;
      z2 = b;
      z3 = c;
      z4 = d;
    }
    void setdata()
    {
       cout << z1 << endl << z2 << endl << z3 << endl << z4 << endl;
    }
};
 
int main()
{
 Copy cop(14,5.7, 'm', "monika");
 cop.setdata();

 Copy co(cop);
 co.setdata();

}