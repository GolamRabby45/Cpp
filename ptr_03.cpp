#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
    vector<string> *v --> v is a pointer to a vector of string 
    vector<string> v --> v is a vector of string 
*/

void display(vector<string> *v)
{
    for(auto s: *v)
        cout << s << " ";
}

void display_01(int *arr, int sen)
{
    while(*arr != sen){
        /*cout << *arr;
        arr++;*/

        cout << *arr++ << " ";
        cout << endl;
    }
} 

int main() {

    vector<string> str {"golam", "rabby", "1203045"};
    display(&str);

    int scores [] {100, 200, 300, 1};
    int sen = 1;

    display_01(scores, sen);

    return 0;
}