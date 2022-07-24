#include<iostream>
#include<string>

/*
    Polymorphism 
    --> compile time 
        1. function overloading 
        2. operator overloading 
    --> Run time 
        1. function overriding
*/

/*
    Account a;
    a.display(); -- Account::display()

    Savings s;
    s.display(); -- Account::display()

    Account *p = new Trust();
    p->display(); -- Trust()::display() will call because diplay() method is declared as "virtual" in Account class
*/

class Base {
public:
    void say_cheese() const{
        std::cout << "cheese from base class: " << std::endl;
    
    }
};

class Derived: public Base {
public:
    void say_cheese() const{
        std::cout << "cheese from derived class: " << std::endl;
    
    }
};

void greetings_failure(const Base& obj){
    std::cout << "hello I am a complete failure: " << std::endl;
    obj.say_cheese();

}


int main(){

    Base b;
    b.say_cheese();

    Derived d;
    d.say_cheese();

    greetings_failure(b); // can pass b as b is Base class objects 
    greetings_failure(d); // can pass d as d is derived from Base class
                          // d is Base class object reference 
                          // will call Base::say_cheese() 
    return 0;
}