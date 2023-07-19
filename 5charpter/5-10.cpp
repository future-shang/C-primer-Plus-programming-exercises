#include <iostream>
using namespace std;

int main(){
    int rows{};
    cout << "Enter number of rows: " ;
    cin >> rows;

    for(int i = 0; i < rows; i++){
        for(int j = rows-i-2; j >= 0;j--)
            cout << ".";
        
        for(int q = 1;q <= i + 1; q++)
            cout <<"*";
        cout << "\n";
    } 
    return 0;
}