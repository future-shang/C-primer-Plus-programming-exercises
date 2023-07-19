#include <iostream>
#include <array>

using namespace std;

int main(){
    array<double,3> run;
    cout << "1: ";
    cin >> run[0];
    cout << "2: ";
    cin >> run [1];
    cout << "3: ";
    cin >> run [2];

    double ave = (run[0] + run[1] + run[2])/3;

    cout << ave << endl;


    return 0;
}