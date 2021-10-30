#include<iostream>
using namespace std;
class Student
{
    public:
        Student()
        {}
        Student(int ID)
        {
            this->ID=ID;
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



class CSStudent: public Student {
//=====TO DO==================
//complete the definition for CSStudent
    public:
	CSStudent() {}
	CSStudent(int id)
	{
	    this->ID = id;
	}
	void ShowMajor() 
	{
	    cout<<"I am a student majoring Computer Science\n";
	    cout<<"And My ID is "<<ID<<endl;
	}
};



class SEStudent: public Student {
//=====TO DO==================
//complete the definition for SEStudent
    public:
	SEStudent() {}
	SEStudent(int id)
	{
	    this->ID = id;
	}
	void ShowMajor() 
	{
	    cout<<"I am a student majoring Software Engineering\n";
	    cout<<"And My ID is "<<ID<<endl;
	}
};

int main()
{
    //Student::ShowMajor();
    CSStudent CSA(25);
    CSA.ShowMajor();
    SEStudent SEB(22);
    SEB.ShowMajor();
}
