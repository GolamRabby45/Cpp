#include<iostream>
using namespace std;

class Base {
public:
    int x;
};

class Derived: public Base {

public:
    void print() {
        cout << x << endl;
        cout << "printing everything:" << endl;
    }
};

int main() {

    Derived d;
    cout << d.x << endl;
    d.print();
}