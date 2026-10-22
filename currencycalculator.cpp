#include <iostream>

int main(){
    double pounds, exchangeRate, euros;
    std::cout << "Please state the amount of money in GBP:" << std::endl;
    std::cin >> pounds;
    std::cout << "Please state the exchange rate to euros:" << std::endl;
    std::cin >> exchangeRate;
    euros = pounds * exchangeRate;
    std::cout << "You have €" << euros << std::endl;

}   