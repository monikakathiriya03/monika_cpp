// destructor
// destructor call when all funcation are call and complate [ Tiele "~"]

#include<iostream>
using namespace std;
class MONIKA // class name
{
    int a,b,l,s,t,r;
    public :
    MONIKA()// 1."Square"
    {
     cout << "Enter The Value :- " ;
     cin >> l;
     s=l*l;
     cout << "Area Of Square :- " << s <<"\n";
    
    }
 
   MONIKA(int l, int a) // 2. "Rectangle"
    {
     cout << "\nEnter The Frist Value :- " ;
     cin >> l;
     cout << "Enter The Second Value :- " ;
     cin >> a;
     b=l*a;
     cout << "Area Of Rectangle :- " << b <<"\n";
    }


    MONIKA(double l,double b)// 3. "TriAngle"
    {
     cout << "\nEnter The Frist Value :- " ;
     cin >> l;
     cout << "Enter The Second Value :- " ;
     cin >> b;
     t=l*b/2;
     cout << "Area Of TriAngle :- " << t <<"\n" ;
    }

    MONIKA(int a)// 4. "Circle"
    {
     cout << "\nEnter The Value :- " ;
     cin >> r;   
     a=20/7*r*r;
     cout << "Area Of Circle :- " << a <<"\n";
    }

    ~ MONIKA()
    {
        cout << "........ || DESTRUCTOR CLASS CALL ||........ \n ";
    }

    int get()
    {
        return a;
    }
};

int main()
{
    MONIKA mk,mk1(10,12),mk2(5.5,7.5),mk3(15);
    cout << "\n value of is a : " << mk1.get() << "\n";
    return 0;
}