#include <iostream>
#include <array>
using namespace std;
const int Arsize{100};

int main(){
    array<long double,Arsize> factorizals;
    factorizals[1] = factorizals[0] = 1;
    for(int i{2};i < Arsize; i++)
        factorizals[i] = factorizals[i-1] * i;
    
    cout << "100! = " << factorizals[99] << endl;

    return 0;
}