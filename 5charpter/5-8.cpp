#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char word[10]{};
    int count{};

    cout << "Enter words (to stop,type the word done): \n";

    while(strcmp(word,"done")){
        cin >> word;
        count++;
    }

    cout << "You entered a total of " << count-1 << " words\n"; 

    return 0;
}