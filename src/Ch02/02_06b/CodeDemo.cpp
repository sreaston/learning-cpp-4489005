// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000
//#define DEBUG

int main(){
    
    int32_t large = CAPACITY;
#ifdef DEBUG
    std::cout << "!!Begin addition!!" << std::endl;
#endif
    uint8_t small = 37;
    large += small;
    std::cout << "Large = " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
