#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
private:
    unsigned sec$;
public:
    //Constructor & Destructor :
    Time() : sec$(0) {}
    Time(unsigned second) : sec$(second) {}
    Time(unsigned hour, unsigned minute, unsigned second) : sec$(0)
    {
        sec$ += (hour % 24) * 3600;
        sec$ += (minute % 60) * 60;
        sec$ += (second % 60);
    }
    ~Time() {}
    //Method in class Time :
    unsigned getHour() const;
    unsigned getMinute() const;
    unsigned getSecond() const;
};

unsigned Time::getHour() const
{
    unsigned hour(0);
    hour = sec$ / 3600;
    return hour;
}
unsigned Time::getMinute() const
{
    unsigned minute(0);
    minute = (sec$ % 3600) / 60;
    return minute;
}
unsigned Time::getSecond() const
{
    unsigned second(0);
    second = sec$ % 60;
    return second;
}


int main()
{
    Time t1(3598);
    cout << "Now time is : " << setw(2) << setfill('0') << t1.getHour() << ':' << setw(2) << setfill('0') << t1.getMinute() << ':' << setw(2) << setfill('0') << t1.getSecond() << endl;//按照格式显示时间

    return 0;
}

//Ctrl + F 查找并替换
