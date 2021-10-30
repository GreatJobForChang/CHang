#include "MyTime.h"
MyTime:: MyTime()
{}

//=====TO DO====(b)===============
MyTime:: MyTime(int hr, int mi){
    // complete the constructor function using the 
    // Initialization way.
    this->hour = hr;
    this->min = mi;
}

//=====TO DO=====(e)=============
MyTime MyTime::operator+(const MyTime& m)
{
    // complete the operator overloading for +
    MyTime time;
    time.hour = this->hour + m.hour;
    time.min = this->min + m.min;

    return time;
}


//=====TO DO=====(f)=============
bool MyTime::operator<(const MyTime& B)
{
    // complete the operator overloading for <
    int timeA = 60 * this->hour + this->min;
    int timeB = 60 * B.hour + B.min;
    return timeA < timeB;
}
MyTime::~MyTime()
{
    std::cout<<"end of the object. Space Deleted.\n";
}
void MyTime::displayTime()
{
    std::cout<<"The time is: hour: "<<hour<<"   The min is:  "<<min<<".\n";
}

