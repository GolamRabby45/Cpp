#include <iostream>
#include <string>

int main() {
    int x {10};
    int& ref {x}; // int& --> preferred 


    std::cout << x << '\n';
    std::cout << ref << '\n'; //lvalue, the value of x is printed by referencing x. 
    
    ref = 20;

    std::cout << x << '\n';

    return 0;
}