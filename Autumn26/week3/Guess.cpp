
#include <iostream>

int main(){
    int lowerbound=0, higherbound=100, guess;
    std::string temp, i;
    bool correct= false;
    while (!correct){
        guess=(lowerbound+higherbound)/2;
        std::cout << "Is you number " << guess << " ? Y/N:"<< std::endl;
        std::cin>> i;
        if (i=="N"){
            std::cout << "Is you number Higher or Lower:"<< std::endl;
            std::cin>> temp;
            if (temp=="Higher"){
                lowerbound=guess;
            }
            else{
                higherbound=guess;
            }
        }
        else{
            correct=true;
        }

    }


}