#include<iostream>
#include<stdio.h>

class Time
{
    private:
        int hours;
        int minutes;
    public:
        void settime(int n, int m)
        {
            hours = n;
            minutes = m;
        }
        void showtime()
        {
            std::cout<<"hours: "<<hours<<" minutes: "<<minutes<<"\n";
        }
        Time sum(Time temp)
        {
            Time out;
            out.minutes = minutes + temp.minutes;
            out.hours = out.minutes / 60;
            out.minutes %= 60;

            out.hours += hours + temp.hours;

            return out;
        }

};

int main()
{
    Time time1;
    Time time2;
    Time time3;

    time1.settime(4,130);
    time2.settime(6,54);

    time3 = time1.sum(time2);

    std::cout<<"time1: ";
    time1.showtime();
    std::cout<<"time2: ";
    time2.showtime();
    std::cout<<"time3: ";
    time3.showtime();

    return 0;
}
