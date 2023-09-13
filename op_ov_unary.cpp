//operator overloading for unary operator in incrimant
#include<iostream>
using namespace std;

 class Hexagon{
     int side;
    public:
     void setdata(int s)
     {
        side = s;
     }
 Hexagon operator++(int)
 {
  Hexagon hex;

  hex.side = side++;

  return hex;
 }

  int getdata()
  {
    return 2.6 * side * side;
  }
 };

  int main()
  {
    Hexagon hex1,hex2;

    hex1.setdata(2);
    cout << "hexagonal 1 is :" << hex1.getdata() << endl;

    hex1++;
    cout << "hexagonal 2 is :" << hex1.getdata() << endl;
  }