#include <iostream>
#include <string>

int main(){
    using namespace std;

    string fname;
    string lname;

    cout << "Enter your first name : ";
    cin >> fname;

    cout << "Enter your last name : ";
    cin >> lname;

    string name = lname +", " + fname;
    cout << "Here is the information in a single strign : " << name << endl;

    return 0 ; 
}