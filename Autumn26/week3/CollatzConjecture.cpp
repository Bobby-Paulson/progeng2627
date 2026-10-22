
#include <iostream>

int main(){
    int n, max, i=0;
    std::cout << "please enter number:" << std::endl;
    std::cin >> n;
    max=n;
    while (n!=1){
        if((n%2)==0){
            n/=2;
        }
        else{
            n=3*n+1;
        }
        if (n>max){
            max=n;
        }
        std::cout << n << std::endl;
        i+=1;
    }
    std::cout << "This took "<< i <<" steps" << std::endl;
    std::cout << "Largest number reached was "<< max << std::endl;

}