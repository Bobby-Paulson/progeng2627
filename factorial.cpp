#include <iostream>

int main(){
    int n, fact=1;
    std::cin >> n;
    for(int i = n; i > 1; i--){
        fact*=i;
        
    }
    std::cout << n << "!=" << fact<<std::endl;
}