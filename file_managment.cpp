// file managment
// ofstream : stream class to write on file
// ifstream : stream class to read from file
// ffstream : stream class to both read and write from / to file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //ofstream filestream("D:/monika_cpp/monika_cpp/file1.txt");
    ofstream filestream("file1.txt");
    if (filestream.is_open())
    {
        filestream << "My Name is Monika";
        filestream << "\nI Go Skill Qode Daily";
        filestream << "\nAnd I learn the full stack in SkillQode";
        filestream.close();
    }

    else
    {
        cout << "File Opening Is Fail";
    }
    
    return 0;
}