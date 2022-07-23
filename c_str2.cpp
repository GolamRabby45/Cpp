#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main(){
    /* C-style string functions*/ 
    char str [80] {};

    strcpy(str, "Hello ");
    strcat(str, "Golam");

    cout << str << endl;
    cout << strlen(str) << endl;

    cout << strcmp(str, "Another") << endl;

    return 0;
}