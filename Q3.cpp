#include<iostream>
using namespace std;
class Student
{
    public:
        Student(){}
        Student(int newID):ID(newID)
        {

        }
        int getID()
        {
            return ID;
        }
        void ShowMajor()
        {
            cout<<"I am a student in Miami University\n";
        }
    protected:
        int ID;
};

class RA
{
    public:
        RA(){}
        RA(int NewSalary)
        {
            Salary=NewSalary;
        }
        int getSalary()
        {
            return Salary;
        }
        void ShowYourWork()
        {
            cout<<"I am a RA in Miami University\n";
        }
    protected:
        int Salary;
};

class AboutMe
//=====TO DO==================
//complete the definition for AboutMe

};

int main()
{
    AboutMe Alice(22,223);
    Alice.ShowMajor();
    Alice.ShowYourWork();
    Alice.setMyID(1273);
    Alice.setSalary(2000);
    Alice.DisplayInfo();
}