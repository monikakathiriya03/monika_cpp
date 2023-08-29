#include <iostream>
#include <string.h>
using namespace std;

class Flight {
    int FlightNumber;
    string Destination;
    float Distance;
    float Fuel;
   void calfuel()
    {
      if(Distance<=1000)
      {
       Fuel=500;
      } else
      if(1000<=Distance<=2000)
      {
        Fuel=1100;
      } else
      if(Distance>=2000)
      {
        Fuel=2200;
      }
    }
    public:
      void feedinfo(){
        cout << "enter the FlightNumber : ";
        cin >> FlightNumber;
        cout << "enter the Destination : ";
        cin >> Destination;
        cout << "enter the Distance : ";
        cin >> Distance;
        cout << "enter the Fuel : ";
        cin >> Fuel;
        calfuel();
      }

      void showinfo()
      {
        cout << "\n FlightNumber is: " << FlightNumber;
        cout << "\n Destination is: " << Destination;
        cout << "\n Distance is: " << Distance;
        cout << "\n Fuel is: " << Fuel;

      }
};

       int main()
       {
        Flight f;
        f.feedinfo();
        f.showinfo();
        return 0;
       }



