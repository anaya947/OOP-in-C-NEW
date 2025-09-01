#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void display()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }

    Time SubstractTime(Time t1, Time t2)
    {
        Time temp;
        // Convert both times to seconds
        int totalSeconds1 = t1.hour * 3600 + t1.minute * 60 + t1.second;
        int totalSeconds2 = t2.hour * 3600 + t2.minute * 60 + t2.second;

        // Calculate the difference in seconds
        int diffSeconds = abs(totalSeconds1 - totalSeconds2);

        // Convert back to hours, minutes, and seconds
        temp.hour = diffSeconds / 3600;
        diffSeconds =diffSeconds % 3600;
        temp.minute = diffSeconds / 60;
        temp.second = diffSeconds % 60;

        return temp;
    }
};
int main()
{
    int h1, m1, s1, h2, m2, s2;
    cout << "Enter time 1 (hour minute second): ";
    cin >> h1 >> m1 >> s1;
    cout << "Enter time 2 (hour minute second): ";
    cin >> h2 >> m2 >> s2;

    Time tt1(h1, m1, s1);
    Time tt2(h2, m2, s2);

    Time t3;
    t3 = t3.SubstractTime(tt1, tt2);

    cout << "Time 1: ";
    tt1.display();
    cout << "Time 2: ";
    tt2.display();
    cout << "Difference: ";
    t3.display();

    return 0;
}