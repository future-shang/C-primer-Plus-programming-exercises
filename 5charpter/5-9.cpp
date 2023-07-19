#include <iostream>
#include <string>
using namespace std;

int main(){
    string word{};
    int count{};

    cout << "Enter words (to stop, type the word done):\n";
    while(word != "done"){
        cin >> word;
        count++;
    }

    cout << "you entered a total of " << count-1 << " words\n";

    return 0;
}