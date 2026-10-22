#include <iostream>

int main(){
    int n,m;
    std::cin >> n;
    for (int i=1; i<(n+1); i++){
        for(int j=1; j<(n+1); j++){
            m=i*j;
            std::cout << m << "\t";
        }
        std::cout<<std::endl;

    }
}