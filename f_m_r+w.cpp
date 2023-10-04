// file management in write + read
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
     char input[50];
     // store file data
     ofstream os;
     os.open("file3.txt");

     cout << "please enter your name: " << endl;
     cin.getline(input,100);
     os << input << endl;

     cout << "pealse enter contact number: " << endl;
     cin >> input;
     cin.ignore();
     os << input << endl;

     os.close();

     //read file data
     ifstream is;
     string line;
     is.open("file3.txt");

     cout << endl << "reading from a text file: " << endl;

     while(getline(is, line))
     {
        cout << line << endl;
     }

     is.close();
     return 0;
}