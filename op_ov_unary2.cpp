//operator overloading for unary operator in decrement
#include<iostream>
using namespace std;
 
 class Pyramid{
    int length,height,width;
public:
 void setdata(int len,int he,int wid)
 {
    length = len;
    height = he;
    width = wid;
 }

 Pyramid operator--(int)
 {
    Pyramid p;
    p.length=length--;
    p.height=height--;
    p.width=width--;

    return p;
 }

  int getdata()
  {
    return (length * height * width)/3;
  }
 };

     int main()
     {
        Pyramid p1,p2;

        p1.setdata(5,5,5);
        cout << "pyramid 1 is :" << p1.getdata() << endl;

        p1--;
        cout << "pyramid 2 is :" << p1.getdata();
     }