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
MyTime operator+(const MyTime& m)
{
    // complete the operator overloading for +
    MyTime time;
    time.hour = this->hour + m.hour;
    time.min = this->min + m.min;

    return time;
}


//=====TO DO=====(f)=============
boolean operator<(const MyTime& m)
{
    // complete the operator overloading for <
    timeA = 60 * this->hour + this->min;
    timeB = 60 * m.hour + m.min;
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

