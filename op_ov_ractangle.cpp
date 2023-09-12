//operator overloading for ractangle
#include<iostream>
using namespace std;

 class Ractangle{
      double length;
      double width;
    public:
     void setdata(double len,double wid)
     {
       length = len;
       width = wid; 
     }
    Ractangle operator+(Ractangle &r)
     {
       Ractangle ractangle;
       ractangle.length = length + r.length;
       ractangle.width = width + r.width;

       return ractangle;
     }

     int getdata()
     {
        return  length * width;
     }
 };

     int main()
     {
        Ractangle ractangle1,ractangle2,ractangle3;

        ractangle1.setdata(3.5,5.7);
        cout << "ractangle 1 is :" << ractangle1.getdata() << endl;

        ractangle2.setdata(4.3,2.6);
        cout << "ractangle 2 is :" << ractangle2.getdata() << endl;

        ractangle3=ractangle1+ractangle2;
        cout << "ractangle 3 is :" << ractangle3.getdata() << endl;
     }
