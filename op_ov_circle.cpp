//operator overloading for circle
#include<iostream>
using namespace std;

class Circle{
    double radius;
public:
  void setdata(double rad)
  {
    radius = rad;
  }

  Circle operator+(Circle &c)
  {
    Circle cir;
    cir.radius = radius + c.radius;

    return cir ;
  }

  int getdata()
    {
        return 3.14 * radius * radius;
    }
};
 
 int main()
 {
    Circle circle1,circle2,circle3;
    circle1.setdata(3);
    cout << "circle1 is :" << circle1.getdata() << endl;

    circle2.setdata(2);
    cout << "circle2 is :" << circle2.getdata() << endl;

    circle3 = circle1 + circle2;
    cout << "circle3 is :" << circle3.getdata() << endl;
 }