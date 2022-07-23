#include <iostream>
#include <string.h>
#include <string>

using namespace std;

// string is an array of characters
int main() {
    const char str[] = " I am Golam Rabby";
    //const char *str_1 = "I am Golam Rabby";

    for(int i = 0; str[i] != 0; i++){
        printf("The strings are %c\n", str[i]);
    }

    std::string last_name {"Grabby"};
    int length = static_cast<int> (last_name.length());
    std::cout << length << endl;
    std::cout << last_name.length();

    //for( int i = 0; str[i]; i++)
    

    return 0; 
}