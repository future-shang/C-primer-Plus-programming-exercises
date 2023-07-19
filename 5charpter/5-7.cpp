#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){

    struct car{
        string producer;
        int proyear;
    };

    cout << "how many cars do you wish to catalog? ";
    int numofcar{};
    cin >> numofcar;
    cin.get();

    car *realcar = new car[numofcar];
        
    for(int i = 0 ;i < numofcar; i++){      
        cout << "Car #" << (i+1) <<":" << endl;
        cout << "Please enter the make: ";
        getline(cin, (realcar+i)->producer);
        cout << "Please enter the year made: ";
        cin >> (realcar+i)->proyear;
        cin.get();
    }

    cout << "Here is your collection:\n";
    for(int i = 0; i < numofcar; i++){
        cout << (realcar+i)->proyear << " " << (realcar+i)->producer << endl;    
    }
    delete [] realcar;
    

    return 0;

}