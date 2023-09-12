// operator overloading for squre
#include<iostream>
using namespace std;

 class Squre{
      int length;
    public:
     void setdata(int len)
     {
       length = len; 
     }
     Squre operator+(Squre &s)
     {
       Squre squre;
       squre.length = length + s.length;

       return squre;
     }

     int getdata()
     {
        return  length * length;
     }
 };

     int main()
     {
        Squre squre1,squre2,squre3;

        squre1.setdata(3);
        cout << "squre 1 is :" << squre1.getdata() << endl;

        squre2.setdata(4);
        cout << "squre 2 is :" << squre2.getdata() << endl;

        squre3=squre1+squre2;
        cout << "squre 3 is :" << squre3.getdata() << endl;
     }