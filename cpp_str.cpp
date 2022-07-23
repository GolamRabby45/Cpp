#include <iostream>
#include <string.h>
#include <vector>
#include <cstring>
#include <string>

/*
    some function prototypes in cpp 
    void display (int n);
    void display (std::string s);
    void display (std::vector<int> v);
    void display (std::vector<std::string> s);
*/


using namespace std;

int main() {
    string s4 {"Apple"};
    string s5 {"Orange"};

    cout << "******normal for loop***** " << endl;
    for(size_t i = 0; i < s4.length(); i++){
        cout << s4[i];
    }
    cout << endl;

    for(size_t s = 0; s < s5.length(); s++){
        cout << s5[s];
    }
    cout << endl;

    cout << "************ range-based for loop*********" << endl;

    for(char i: s4){
        cout << i;
    }
    cout << endl;

    for (char s: s5){
        cout << s;
    }
    cout << endl;

    cout << " ******** getline methods for cpp string ********** " << endl;

    string my_name {};
    cout << "Enter your name: " << endl;

    getline(cin, my_name);
    cout << "My name is: " << my_name << endl;
    cout << "The length of my name is: " << my_name.length() << endl;

    return 0;
}