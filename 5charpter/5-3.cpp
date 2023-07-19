#include <iostream>
using namespace std;

int main(){
    int num{},sum{};
    cin >> num;
    while(num){
        sum += num;
        cout << "the sum of all number is " << sum << endl;
        cin >> num; 
    }

    return 0;
}