#include <iostream>

#include <iostream>

int main(){
    double length, width, perimeter, area;
    std::cout << "please state the length of the rectangle" <<std::endl;
    std::cin >> length;
    std::cout << "please state the width of the rectangle" <<std::endl;
    std::cin >> width;
    perimeter = 2*(length+width);
    area= length*width;
    std::cout << "The area is " << area << " units and the perimeter is " << perimeter << " units" <<std::endl;



}