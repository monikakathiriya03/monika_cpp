#include<iostream>
#include<string.h>
using namespace std;
struct employ{
    char name[100];
    int sallary;
    char id[100];
};
 int main()
 {
    struct employ employ1;
    strcpy(employ1.name,"chirag");
    employ1.sallary=20000;
    strcpy(employ1.id,"chiragrathod");
 cout << employ1.name << "\n" << employ1.sallary << "\n" << employ1.id ;
    
 }
