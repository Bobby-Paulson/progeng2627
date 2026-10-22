#include <iostream>

int main(){
    double bmi;
    int temporary, height, weight;
    //centimetres here to avoid using a double value
    std::cout << "please insert height IN CENTIMETRES: " <<std::endl;
    std::cin >> height;
    std::cout << "please insert weight IN KILOGRAMS: " <<std::endl;
    std::cin >> weight;
    //these are not constants, 100000 is conversion to metres * 10, which i reverse in the next step
    temporary= 100000*weight/(height*height);
    bmi=temporary/10.0;
    std::cout << "BMI is " << bmi <<std::endl;
}