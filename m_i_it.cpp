// multiple inheritance in it field
#include<iostream>

using namespace std;

class C_langauge
{
    public:
    void loops()
    {
        cout << "loop can run..." << endl;
    }
};

class Datastruct
{
    public:
    void stack()
    {
        cout << "stack can work..." << endl;
    }
};

class Python : protected C_langauge, protected Datastruct
{
    public:
    void subroutine()
    {
        cout << "subroutine can be..." << endl;
        loops();
        stack();

    }
};

int main()
{
Python pm;
pm.subroutine();

}