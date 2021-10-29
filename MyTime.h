#include<iostream>

class MyTime
{
    public:
        MyTime();
        MyTime(int hr, int mi);
        ~MyTime();
        void displayTime();
    //operation overload for + (e)
    operator+;
    //operation overload for > (f)
    operator<;
    

    private:
        int hour;
        int min;
};