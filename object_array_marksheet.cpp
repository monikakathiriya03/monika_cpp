//object array in marksheet list
#include<iostream>
using namespace std;

class Marksheet
{
 int sci,math,guj,eng,total;
 double per;
 string name;

 public:
  Marksheet()
  {
     cout << endl
           << "enter student marks....." << endl;
     cout << "enter student name :";
     cin >> name;
     cout << "enter sci marks :";
     cin >> sci;
     cout << "enter math marks :";
     cin >> math;
     cout << "enter guj marks :";
     cin >> guj;
     cout << "enter eng marks :";
     cin >> eng;

     total = sci + math + guj + eng;
     per = total/4;
     
  }

    void getresult()
    {
        cout << name << "\t" << sci << "\t" << math << "\t" << guj << "\t" << eng << "\t" << total << "\t" << per
         << endl; 
    }
};

 int main()
 {
    Marksheet marksheet[4];

    cout << endl << "name" << "\t" << "sci" << "\t" << "math" << "\t" << "guj" << "\t" << "eng" << "\t" << "total" 
    << "\t" << "per" << endl; 

    for (int i=0;i<=4;i++)
    {
        marksheet[i].getresult();
    }
 }