#include <iostream>

int main(){
    int n =1, sum=0;
    while(n !=0){
        std::cout << "enter a number:" << std::endl;
        std::cin >> n;
        
        if (n!=0){
            std::cout << "the sum so far is:" << std::endl;
            sum+=n;
            std::cout << sum << std::endl;
        }
        
    }
}