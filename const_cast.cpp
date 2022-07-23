// const_cast in C++

// The expression const_cast<t>(v) can be used to change the const or volatile qualifiers of pointers or references
// Where T must be a pointer , reference, or pointer-to member type 


#include<iostream>
using namespace std;

//1. when the actual referred object/variable is not const

int main() {

    const int a1 = 10;
    const int* b1 = &a1;
    int* d1 = const_cast<int*>(b1);
    *d1 = 15; // Invalid and undefined behaviour! 

    cout << a1 << endl;
    cout << *d1 << endl;

    int a2 = 20;
    const int* b2 = &a2;
    int* d2 = const_cast<int*>(b2);
    *d2 = 50; // valid code! 

    return 0;

}

