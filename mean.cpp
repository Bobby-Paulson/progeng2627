#include <iostream>

int main(){
    int n=-1, sum=0, i=0;
    double mean=0;
    while(n!=0){
        i+=1;
        std::cout << "enter a number:" << std::endl;
        std::cin >> n;
        
        if (n!=0){
            std::cout << "the average so far is:" << std::endl;
            sum+=n;
            mean=1.0*sum/i;
            std::cout << mean << std::endl;
        }
    }
}