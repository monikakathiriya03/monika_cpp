#include <iostream>
using namespace std;
  
class Person {
    int id;
    string name;
  
public:
    void set_p()
    {
        cout << "Enter Person Id:";
        cin >> id;
        cout << "Enter person Name:";
        cin >> name;
    }
};
  
class Skill : protected Person 
{
    string sk;
  
public:
    void set_s()
    {
        set_p();
        cout << "Enter person skill :";
        cin >> sk;
    }
};  
    
  
int main()
{
    Skill skill;
    skill.set_s();
}