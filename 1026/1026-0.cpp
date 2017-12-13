#include <iostream>
#include <string>

using namespace std;

int main() {
    long start, end;
    cin>>start>>end;

    long period = (end - start) / 100.0 + 0.5;

    int hour, minute, second;

    hour = period / 60 / 60;
    period = period - hour * 60 * 60;
    minute = period / 60;
    second = period % 60;

    string hour_zero, minute_zero, second_zero;
    hour_zero = minute_zero = second_zero = "";
    if (hour < 10) 
        hour_zero = "0";
    if (minute < 10)
        minute_zero = "0";
    if (second < 10) 
        second_zero = "0";


    cout<<hour_zero<<hour<<":"<<minute_zero<<minute<<":"<<second_zero<<second;

    return 0;
}
