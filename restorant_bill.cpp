#include<iostream>
#include<string.h>
using namespace std;

class Restorant{
    public:
    string customor_name,mobile_num,item[50];
    int order,bill=0,n,I_Gst,S_Gst,T_Gst,Disc,F_Bill,a[8]={0,0,0,0,0,0,0,0};
    Restorant()
    {
        cout << "\n\t\t\t\t WELCOME TO MONIE RESTORANT " << endl;
        cout << "\n\t\t\t\t -------------------------- " << endl << endl;
    }

    void set_details()
    {
        cout << "enter the customor name : " << endl;
        cin >> customor_name;
        cout << "enter the customor mobile number : " << endl;
        cin >> mobile_num;
    }

    void get_details()
    {
        cout << endl;

        cout <<"*****************************" <<endl;
        cout <<"\t-----Monie Cafe-----"<<endl;
        cout <<"*****************************" <<endl; 
        cout<<"\tFinal Bill"<<endl;
        cout <<"*****************************" <<endl;
        cout <<"Castmor Name :"<<customor_name<<endl;;
        cout <<"Number : "<<mobile_num<<endl;

    }

    int Soup()
    {
       cout << "\t\t\t\tsoup manue" << endl;
       cout << "\t\t\t\t----------" << endl;

       cout <<"\t\t1.Tomato Soup\t\t\t\t230/-" << endl;
       cout <<"\t\t2.Manchow Soup\t\t\t\t340/-" << endl;
       cout <<"\t\t3.Brocolii Soup\t\t\t\t250/-" << endl;

       cout <<"\t\tPress 0 if you complate order" << endl;
       cout <<"\t\tpress 4 if you cancle order" << endl;
       cout << "\n";

       cout << "your order--:";
       cin >> order;

       switch(order)
       {
        case 1:
        cout << "enter quntity:" << endl;
        cin >> n;
        a[0]+=n;
        item[0]="Tomato Soup";
        bill=bill+(n*230);
        break;

        case 2:
        cout << "enter quntity:" << endl;
        cin >> n;
        a[1]+=n;
        item[1]="Manchow Soup";
        bill=bill+(n*340);
        break;

        case 3:
        cout << "enter quntity:" << endl;
        cin >> n;
        a[2]+=n;
        item[2]="Brocolii Soup";
        bill=bill+(n*250);
        break;

        case 0:
        break;

        case 4:
        bill=bill;
        break;

        default:
        cout << "wrong" << endl;

       }return bill;

    }
int Pizza()
    {
       cout << "\t\t\t\tpizza manue" << endl;
       cout << "\t\t\t\t----------" << endl;

       cout <<"\t\t1.Panirtika Masala\t\t\t500/-" << endl;
       cout <<"\t\t2.Margreta\t\t\t\t440/-" << endl;
       cout <<"\t\t3.Burn To Hell\t\t\t\t550/-" << endl;

       cout <<"\t\tPress 0 if you complate order" << endl;
       cout <<"\t\tpress 4 if you cancle order" << endl;
       cout << "\n";

       cout << "your order--:";
       cin >> order;

       switch(order)
       {
        case 1:
        cout << "enter quntity:" << endl;
        cin >> n;
        a[3]+=n;
        item[0]="Panirtika Masala";
        bill=bill+(n*500);
        break;

        case 2:
        cout << "enter quntity:" << endl;
        cin >> n;
        a[4]+=n;
        item[1]="Margreta";
        bill=bill+(n*440);
        break;

        case 3:
        cout << "enter quntity:" << endl;
        cin >> n;
        a[5]+=n;
        item[2]="Burn To Hell";
        bill=bill+(n*550);
        break;

        case 0:
        break;

        case 4:
        bill=bill;
        break;

        default:
        cout << "wrong" << endl;

       }return bill;

    }
int Punjabi()
    {
       cout << "\t\t\t\tpunjabi manue" << endl;
       cout << "\t\t\t\t----------" << endl;

       cout <<"\t\t1.Kajukari\t\t\t\t330/-" << endl;
       cout <<"\t\t2.Panirbhuji\t\t\t\t350/-" << endl;
       cout <<"\t\t3.Kajulasan\t\t\t\t450/-" << endl;

       cout <<"\t\tPress 0 if you complate order" << endl;
       cout <<"\t\tpress 4 if you cancle order" << endl;
       cout << "\n";

       cout << "your order--:";
       cin >> order;

       switch(order)
       {
        case 1:
        cout << "enter quntity:" << endl;
        cin >> n;
        a[6]+=n;
        item[0]="Kajukari";
        bill=bill+(n*330);
        break;

        case 2:
        cout << "enter quntity:" << endl;
        cin >> n;
        a[7]+=n;
        item[1]="Panirbhuji";
        bill=bill+(n*350);
        break;

        case 3:
        cout << "enter quntity:" << endl;
        cin >> n;
        a[8]+=n;
        item[2]="Kajulasan";
        bill=bill+(n*450);
        break;

        case 0:
        break;

        case 4:
        bill=bill;
        break;

        default:
        cout << "wrong" << endl;

       }return bill;

    }

    int cancel(){
        for(int i=0;i<8;i++){
            if(a[i]>0)
            {
                a[i]=0;
                item[i]="";
            }
        }
        return bill = 0;
    }
    int Discount(int b){
        if(b>=5000){
            Disc = b * 0.1;
        }
        else {
            Disc = 0;
        }
            
        return Disc;
    }
    int Gst(int b){
        S_Gst = (b * 0.025);
        I_Gst = (b * 0.025);
        T_Gst = S_Gst + I_Gst;
        return T_Gst;
    }
    int Final_Bill(int b, int Disc_Amt, int gst){
        F_Bill = b - Disc_Amt + gst;
        return F_Bill;
    }
     void Thankyou(){
        cout<<"\n\t*\tThank You for Visiting Us...."<<endl;
        cout<<"\t*\tvisit Again...."<<endl;
    }
    void Get_order(){
        cout<<"*********************************\n";
        cout<<"\n-->|your Orderd Details|<-- "<<endl;
        cout<<"*********************************\n";
        for ( int i = 0; i <= 7; i++)
        {
            if (!item[i].empty())
                cout<<item[i]<<" :-> "<<a[i]<<endl;

        }
    }


};

int main(){
    Restorant R;
    int ch, b=0, gst=0,Disc_Amt=0, Bill=0,x=0,num[50];
    R.set_details();
    cout<<"\n\t\t\tMENU"<<endl;
    cout<<"\t\t--------------------";
    cout<<"\n";
    
    do{
        cout<<"\n\t1. Soup Manue"<<endl;
        cout<<"\t2. Pizza"<<endl;
        cout<<"\t3. Panjabi"<<endl;
        cout<<"\t\tPress 0 if You Complet Order"<<endl;
        cout<<"\t\tPress 4 if You Cancel Order"<<endl<<endl;
        cout<<"Enter Your Choice : ";
        cin>>ch;
        switch(ch){
            case 1:
                //x=0;
                b = R.Soup();
                break;
            case 2:
                //x=0;
                b = R.Pizza();
                break;
            case 3:
                //x=0;
                b = R.Punjabi();
                break;
             case 4:
                x=1;
                b =R.cancel();
                break;
            case 0:
                break;
            default:
                cout<<"your chice is Wrong .......\n";
                break;
        }
    }while(ch!=0);
    Disc_Amt = R.Discount(b);
    gst = R.Gst(b-Disc_Amt);
    Bill = R.Final_Bill(b, Disc_Amt, gst);
    R.get_details();
    R.Get_order();
    cout <<"*****************************" <<endl;
    cout<<"Your Actual Bill \t: "<<b<<endl;
    cout<<"Your Disc \t\t: "<<Disc_Amt<<endl;
    cout<<"After Discount \t\t: "<<b-Disc_Amt<<endl;
    cout<<"SGST \t\t\t: "<<gst/2<<endl;
    cout<<"IGST \t\t\t: "<<gst/2<<endl;
    cout<<"Total GST is \t\t: "<<gst<<endl;
    cout<<"Your Final Bill is \t: "<<Bill<<endl;
    cout <<"*****************************" <<endl;
    R.Thankyou();
}