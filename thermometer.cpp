#include <iostream>

int main(){
    double fahrenheit, celsius;
    std::cout << "please insert celsius temperature" <<std::endl;
    std::cin >> celsius;
    fahrenheit= celsius*1.8+32;
    std::cout << "Temperature is " << fahrenheit << " degrees Fahrenheit" <<std::endl;

}