#include <iostream>
#include <string>
#include <vector>
#include <cstring>

int main() {
    std::cout << "Enter your name:\n";
    std::string name {};
    std::getline(std::cin >> std::ws, name);
    std::cout << name << '\n';
    return 0;
}