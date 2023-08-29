#include <iostream>
#include <string.h>
using namespace std;
class TEST {
  private:
    int TestCode;
    string Description;
    int NoCandidate;
    int CenterReqd;

  public:
    int CALCNTR() {
      return ( NoCandidate / 100 + 1);
    }

    void SCHEDULE() {
      cout << "Enter Test Code: ";
      cin >> TestCode;
      cout << "Enter Description: ";
      cin >> Description;
      cout << "Enter Number of Candidates: ";
      cin >> NoCandidate;
      CenterReqd = CALCNTR();
    }

    void DISPTEST() {
      cout << "Test Code: " << TestCode << endl;
      cout << "Description: " << Description << endl;
      cout << "Number of Candidates: " << NoCandidate << endl;
      cout << "Number of Centers Required: " << CenterReqd << endl;
    }
};
int main ()
{
     TEST stu; // stu is a test class object
     stu.CALCNTR();
     stu.SCHEDULE();
     stu.DISPTEST();
    return 0;
}
/*
Enter Test Code: 10
Enter Description: 100
Enter Number of Candidates: 90
Test Code: 10
Description: 100
Number of Candidates: 90     
Number of Centers Required: 1
*/