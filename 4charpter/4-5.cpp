#include <iostream>
#include <string>

int main(){
    struct CandyBar{
        std::string brand;
        float weight;
        int calorie;
    }snake{
        "Mocha Munch",
        2.3,
        350
    };

    std::cout << "brand: " << snake.brand << std::endl;
    std::cout << "weight: " << snake.weight << std::endl;
    std::cout << "calorie: " << snake.calorie << std::endl;

    CandyBar candy[3]{
        {"ddo",5.2,520},
        {"fuerd",516.2,526},
        {"ewef",2.5,251}
    };

    std::cout << candy->brand <<", "<< candy->calorie << ", " << candy->weight << std::endl; 
    std::cout << (candy+1)->brand <<", "<< (candy+1)->calorie << ", " << (candy+1)->weight << std::endl;
    std::cout << (candy+2)->brand <<", "<< (candy+2)->calorie << ", " << (candy+2)->weight << std::endl;
    return 0;
}