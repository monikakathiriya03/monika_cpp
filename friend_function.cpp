//frienf function - frienf operator overloading
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

      

      int getdata()
      {
        return (breath * height)/2;
      }
      friend Triangle operator+(Triangle &a,Triangle &t);
};

  Triangle operator+(Triangle &a,Triangle &t)
      {
        Triangle triangle;

        triangle.height=a.height + t.height;
        triangle.breath=a.breath + t.breath;

        return triangle;
      }

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