//convert inchs to foots and inchs 
#include <iostream>
using namespace std;


int main(){
    
    int inchs = 0;
    cout << "please input your height(inchs):____\b\b\b\b" ;
    cin >> inchs;
    cout << endl;
    const int CONVERT{12};
    int foots{0};
    foots = inchs/CONVERT;
    inchs = inchs % CONVERT;
    cout << "your height is" 
         << foots << " foots,"
         << inchs << " inchs"
         << endl; 

    return 0;
}