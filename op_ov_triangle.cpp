//operator overloading
#include<iostream>
using namespace std;
class Triangle{
    int height, breath;

    public:
      void setdata(int he, int bre)
      {
        height=he;
        breath=bre;
      }

      Triangle operator+(Triangle &t)
      {
        Triangle triangle;

        triangle.height=height + t.height;
        triangle.breath=breath + t.breath;

        return triangle;
      }

      int getdata()
      {
        return (breath * height)/2;
      }
};

  int main()
  {
    Triangle triangle1,triangle2,triangle3;

    triangle1.setdata(2,3);
    cout << "triangle1 is:" << triangle1.getdata() << endl;

    triangle2.setdata(3,7);
    cout << "triangle2 is:" << triangle2.getdata() << endl;

    triangle3 =  triangle1 + triangle2;
    cout << "triangle3 is:" << triangle3.getdata() << endl;
  }