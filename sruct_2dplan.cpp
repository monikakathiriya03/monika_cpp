#include<iostream>
using namespace std;
struct point{
    int x;
    int y;
};
 int main()
 {
    struct point point1;
    point1.x=34;
    point1.y=45;
    cout << point1.x << "\n" << point1.y;
 }