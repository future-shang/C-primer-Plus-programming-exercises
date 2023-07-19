#include <iostream>
using namespace std;
const int NUMMONTH = 12;

int main(){
    const char * month[NUMMONTH] = 
    {"January","February","March","April","May",
     "June","July","August","September","October",
     "November","December"   
    };

    int sale[NUMMONTH]{},sum{};
    for(int i = 0; i < 12; i++){
        cout << month[i] << "\t"; 
        cin >> *(sale+i);
        sum += sale[i];
    }

    cout << "the total sales volume for one year is " << sum << endl;

    return 0;
}