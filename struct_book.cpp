#include<iostream>
#include<string.h>
using namespace std;
struct book{
    char name[100];
    char author[100];
    int launched;
};
   int main()
   {
    struct book book1,book2;
    strcpy(book1.name,"manavini_bhavai");
    strcpy(book1.author,"pannalal_patel");
    book1.launched=1947;
     cout << book1.name << "\n" << book1.author << "\n" << book1.launched << "\n" ;
      
    strcpy(book2.name,"jungle_book");
    strcpy(book2.author,"rudyard_kipling");
    book2.launched=1894;
     cout << book2.name << "\n" << book2.author << "\n" << book2.launched;
   }