#include <iostream>
using namespace std;
const int NUMMONTH = 12;
const int YEAR = 3;

int main(){
    const char * month[NUMMONTH] = 
    {"January","February","March","April","May",
     "June","July","August","September","October",
     "November","December"   
    };

    int sale[YEAR][NUMMONTH]{},sum[YEAR]{};
    int allsum{};
    for(int i = 0; i < YEAR; i++){
        cout << "enter the " << (i+1) << " year sale\n";
        for(int j = 0; j < NUMMONTH; j++){
            cout << month[j] << ": ";
            cin >> sale[i][j];
            sum[i] += sale[i][j];
        }
        cout << (i+1) << " : " << sum[i] << endl;
        allsum += sum[i];
    }

    cout << "the sales volume for three years is " << allsum << endl;

    return 0;
}