#include <iostream>
using namespace std;

int main(){
    double Daphne{100},Cleo{100};
    int i = 0;
    do{
        i++;
        Daphne += 100 * 0.1;
        Cleo += Cleo * 0.05;
        cout << Daphne << "\t" << Cleo << endl;
    }while(Cleo <= Daphne);
    cout << "the current year is " << i << endl;
    cout << "now Daphne has " << Daphne << endl
         << "Cleo has " << Cleo << endl;

    return 0;
}