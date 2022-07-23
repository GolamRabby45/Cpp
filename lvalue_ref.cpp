#include <iostream>
#include <string>

void print_value (std::string& y){
    std::cout << y << '\n';
}
int main() {

    std::string x {"Golam Rabby"};
    print_value(x); 
    // x is passed as lvalue reference
    // pass fundamental types by value, and class or struct types by const reference
    
    
    return 0;
}