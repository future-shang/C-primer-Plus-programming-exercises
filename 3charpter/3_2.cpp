//count your BMI index.using foots ,inchs and pounds
#include <iostream>
using namespace std;
const int Foot2inch = 12;
const double Inch2meter = 0.0254;
const double Kg2pounds  = 2.2;

double BMIcount(double,double);

int main(){
    int foots{0};
    int inchs{0};
    cout << "please input your height:__foots,__inchs\n";
    cout << "foots:__\b\b";
    cin >> foots;
    cout <<"inchs:__\b\b";
    cin >> inchs;
    
    cout <<"please input your weight:__pounds\n";
    double pounds{0};
    cout << "pounds:__\b\b";
    cin >> pounds;
    

    inchs += foots * Foot2inch;
    cout << "your heights is " << inchs << " inchs.\n";
    
    double meters{0};
    meters = inchs * Inch2meter;

    double kilgrams{0};
    kilgrams = pounds * Kg2pounds;

    double BMI{0.00};
    BMI = BMIcount(meters,kilgrams);

    cout << "your BMI index is " << BMI << endl;

    return 0;
    }

double BMIcount(double meters,double kilgrams){
    double BMI{0.00};
    BMI = kilgrams/(meters*meters);
    return BMI;
}