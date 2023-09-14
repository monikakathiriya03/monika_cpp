//object array for gst bill
#include <iostream>
using namespace std;
class GST
{
    int rate, qty, amt, billamt, gst, netbill, total;
    string product_name;

public:
    GST()
    {
        cout << "Enter product_name : ";
        cin >> product_name;
        cout << "Enter rate: ";
        cin >> rate;
        cout << "Enter quantity: ";
        cin >> qty;
        cout << "Enter billamt :";
        cin >> billamt;
        gst = (rate * 18) / 100;
        total = qty * gst;
        netbill = billamt + total;
        cout << "Gross Amount: " << gst << endl;
        cout << "Total Gst is :--->" << total << endl;
        cout << "Net Bill Amount: " << netbill << endl;
    }

    void setdata()
    {
         cout << product_name << "\t" << rate << "\t" << qty << "\t" << billamt << "\t" << gst << "\t" << total <<
          "\t" << netbill << "\t" << endl;
    }
};

int main()
{
    GST gst[2];
    cout << endl<< "product_name\t" << "rate\t" << "qty\t" << "amt\t" << "dis\t" << "billamt\t" << "gst\t" 
         << "netbill\t" << endl;
    for (int i = 0; i < 2; i++)
    {
        gst[i].setdata();
    }
}