#include<iostream>
using namespace std;
class batsman
{
 int bcode,innings,notout,runs;
 char bname[20];
 float batavg;
  float calcavg()
  {
    return batavg=runs/(innings-notout);
  }
   public:
   batsman()
   {
    cout << "enter basment 4 digit code number: ";
    cin >> bcode;
    cout << "Enter Basment name. : ";
    cin >> bname   ;
    cout << "Enter Basment innings : ";
    cin >> innings;
    cout << "Enter Basment notout : ";
    cin >>  notout;
    cout << "Enter Basment runs : ";
    cin >> runs ;
    batavg = calcavg() ;
   }

void displaydata()
{
    cout << "\nBasment 4 Digit Code Number Is : " << bcode;
    cout << "\nBasment Basment is : " << bname;
    cout << "\ninnings\t notout\truns \tbatavg";
    cout << "\n" << innings << "\t" <<  notout << "\t" << runs  << "\t" << batavg;
}
};

int main ()
{
   batsman bat; // bat is a batsman class object
     bat.displaydata() ;
}
