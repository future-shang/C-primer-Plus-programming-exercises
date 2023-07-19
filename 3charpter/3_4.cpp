//convert seconds to days,hours ,minutes and seconds
#include <iostream>
using namespace std;

const int Day2Hour = 24;
const int Hour2min = 60;
const int min2seconds = 60;

int main(){

    cout << "enter the number of seconds: ________\b\b\b\b\b\b\b\b";
    long seconds = 0;
    cin >> seconds;

    cout << seconds << " seconds = ";
    long minutes = seconds / min2seconds;
    seconds = seconds % min2seconds;

    long hours = minutes / Hour2min;
    minutes = minutes % Hour2min;

    long days = hours / Day2Hour;
    hours = hours % Day2Hour;

    cout << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds"
         << endl;

    return 0;

}