#include<iostream>
using namespace std;
class  batsman{
    int bcode,innings,notout,runs;
    char bname [20];
    float batavg;
    
    float calcavg() 
 {
    return batavg=runs/(innings-notout);

 }  

 public:
 void readdata(){
 cout << "Enter Basment 4 Digit Code Number. : ";
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
     bat.readdata();
     bat.displaydata() ;
    return 0;
}

/*
Enter Basment 4 Digit Code Number. : 1234
Enter Basment name. : virat
Enter Basment innings : 350
Enter Basment notout : 19
Enter Basment runs : 20598

Basment 4 Digit Code Number Is : 1234
Basment Basment is : virat
innings  notout runs    batavg        
350     19      20598   62
*/