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

class AboutMe: public Student, public RA {
//=====TO DO==================
//complete the definition for AboutMe
    public:
	AboutMe() {}
	AboutMe(int id, int salary)
	{
	    ID = id;
	    Salary = salary;
	}
	void setMyID(int id)
	{
	    ID = id;
	}
	void setSalary(int salary)
	{
	    Salary = salary;
	}
	void DisplayInfo()
	{
	    cout<<"My ID in Miami is: "<<ID<<" ";
	    cout<<"My salary as RA is: "<<Salary<<endl;
	}
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
