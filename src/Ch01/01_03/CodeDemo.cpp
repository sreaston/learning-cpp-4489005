// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    
    std::string str;
    
    //request name
    std::cout << "What is your first name?" << std::endl;
    std::cin >> str;

    //repeat name
    std::cout << "Hello " << str;

    std::cout << std::endl << std::endl;
    return (0);
}
