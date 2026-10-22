#include <iostream>

int main(){
    int a,b, q=0, r=0;
    std::cin>>a>>b;
    while (a>b){
        a-=b;
        q+=1;
    }
    r=a;
    std::cout << "the quotient is " << q << " with remainder "<< r<<std::endl;
}