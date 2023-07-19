#include <iostream>
#include <string>
using namespace std;

int main(){
    struct PISA
    {
        string company;
        double diameter;
        double weight;
    };
    

    //PISA pisa{};
    PISA *pisa = new PISA;
    /*
    cout << "please enter the name of your company:";
    getline(cin,pisa.company);
    cout << "please enter the diameter of your pisa:";
    cin >> pisa.diameter;
    cout << "please enter the weight of your pisa:";
    cin >> pisa.weight;

    cout << "company: " << pisa.company << endl
         << "dameter: " << pisa.diameter << endl
         << "weight: " << pisa.weight << endl;
    */
    cout << "please enter the diameter of your pisa:";
    cin >> pisa->diameter;
    cin.get();
    cout << "please enter the name of your company:";
    getline(cin,pisa->company);
    cout << "please enter the weight of your pisa:";
    cin >> pisa->weight;

    cout << "company: " << pisa->company << endl
         << "dameter: " << pisa->diameter << endl
         << "weight: " << pisa->weight << endl;

    delete pisa;
    return 0;

}