#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char fname[20];
    char lname[20];

    cout << "Enter your first name: ";
    cin.getline(fname,19);

    cout << "Enter your last name: ";
    cin.getline(lname,19);

    strcat(lname,", ");
    strcat(lname,fname);

    cout << "here is the information in a single string : "<< lname << endl;

    return 0;
}