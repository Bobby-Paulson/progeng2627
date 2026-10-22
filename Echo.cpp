#include <iostream>

int main(){
    std::string n = "n";

    while((n != "STOP")&&(n != "stop")&&(n != "Stop")){ // != means different or not equal
        std::cin >> n;
        if (n!="STOP") {
            std::cout << n << std::endl;
        }
        
    }
}