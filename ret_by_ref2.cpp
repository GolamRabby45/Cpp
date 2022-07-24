#include <iostream>
#include <string>

const std::string& print_my_name(){ // returns a const reference
    static const std::string my_name {"Golam Rabby"};
    return my_name;
}
int main() {

    std::cout << "My name is: " << print_my_name() << '\n'; 
    return 0;
}