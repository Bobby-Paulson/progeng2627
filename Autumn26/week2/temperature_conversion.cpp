#include <iostream>
#include <string>

int main(){

    double temperature_in, temperature_out;
    std::string unit_in, unit_out;

    // we declare variables for the input and the output
    // the length is a number, the unit name is text

    
    // useful way to define constants
    bool valid_unit = true;
    std::cin >> temperature_in >> unit_in;
    // we don't print a prompt, we just read the input

    if((unit_in == "C")||(unit_in== "c")){
        unit_out = "F";
        temperature_out = temperature_in*1.8+32;
        
    }
    else if ((unit_in == "F")||(unit_in=="f")){
        unit_out = "C";
        temperature_out = (temperature_in-32)/1.8;
        std::cout << temperature_out << " " << unit_out << std::endl;
    }
    else{
        valid_unit= false;
    }
    if(valid_unit){
        std::cout << temperature_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "ERROR ERROR ERRORRR"<< std::endl;
    }
    
    
}