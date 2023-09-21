// india in multiple inheritance
#include <iostream>
using namespace std;

class gujarat
{
    public:
    void gujarati()
    {
        cout << "people can speak gujarati..." << endl;
    }
};

class maharashtra
{
    public:
    void marathi()
    {
        cout << "people can speak marathi..." << endl;
    }
};

class india : protected gujarat, protected maharashtra
{
  public:
  void langauge()
  {
    cout << "indian people can speak..." << endl;
    gujarati();
    marathi();
  }
};

int main()
{
    india i;
    i.langauge();
}