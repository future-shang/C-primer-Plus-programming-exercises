#include <iostream>
using namespace std;

int main(){
    int min{},max{},sum{};
    cin >> min;
    cin >> max; 
    for(int i = min;i < max+1; i++)
        sum += i;
    cout << sum << endl;

    return 0;
}