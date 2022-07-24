#include<string>
#include<cstring>
#include<iostream>

/*
    class Base() {
    protected:
        /* protected base class members 
        -> accesible from base class itself 
        -> accesible from derived classes from Base 
        -> not accesible by objects of Base or Derived
    public:
        int a;
    
    private:
        int b;
    
    protected:
        int c; 
    }
*/

class Base {
public:
    int a {10};
    void display() {
        std::cout << "The value of the memberes are: " << a << b << c << std::endl;
    }
protected:
    int b {20};
private:
    int c {30};

};

class Derived: public Base {

};


int main() {

    Base base;
    base.a = 100;
    //base.b = 200; // compiler error 
    //base.c = 300; // compiler error

    Derived d;
    d.a = 200;
    //d.b = 400; // compiler error 
    //d.c = 500; // compiler error 

    return 0;
}