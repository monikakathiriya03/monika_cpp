// abstraction class method
#include <iostream> 
using namespace std;

class Base
{
public:
    
        void diaplay()
        {
            cout << "Base class output display print ----->"<< endl;
        }


virtual void showprint() = 0;  
};
class Derived : public Base
{
public:
    void display()
    {
      cout << "Derived class output display print -----> "<< endl;
    }
    void showprint()
    {
        cout <<"Derived class output print ----->"<< endl;
    }
};

int main()
{
    Base  *b;
    Derived d;

    b->diaplay();

    b = &d;
    b->diaplay();
    b->showprint();
}