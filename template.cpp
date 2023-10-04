// templete

#include<iostream>
using namespace std;

template<class T>
void display(T t1)
{
    cout << "display template : "
         << t1 << endl ;

}

template <class x,class y>
void Display(x a, y b)
{
    cout << "Displaying Template :"
    << a << "\t"
    << b << endl;
}

int main()
{
    display(200);
    display(12.56);
    display('G');
    Display('G',1.25);
    Display('x',25);
    Display(25,1.25);
    return 0;
}

    
    