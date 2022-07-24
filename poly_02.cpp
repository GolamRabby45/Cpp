#include<iostream>
#include<string>

/*
    for dynamic polymorphism we need 
    --> inheritance 
    --> Base class pointer or Base class reference 
    --> virtual functions 
*/

/* array of pointers 
    Account *p1 = new Account();
    Account *p2 = new Savings_account();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    Account *array[] = {p1, p2, p3, p4};

    Account *array[] = {p1,p2,p3,p4};

    for(auto i=0; i < 4; i++) {
        array[i]->withdraw();
    }

    for(auto i = 0; i < 4; i++){
        array[i]->withdraw();
    }
    // delete the pointer 
*/

/* vector of pointers 
    Account *p1 = new Account();
    Account *p2 = new Savings_account();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    vector<Account *> accounts {p1, p2, p3, p4};
    for(auto acc_ptr: accounts){
        acc_ptr->withdraw();
    }
    // delete the pointer 
*/

/* pointers in C++
    1. Raw pointers 
    2. Smart pointers 
*/

/* Virtual functions 
-> redefined functions are bound statically 
-> overridden functions are bound dynamically 
-> virtual functions are overridden 
-> allow us to treat all objects as the objects of the Base class 
*/

class Account {
public:
    virtual void withdraw(double amount);

};

class Checking: public Account{
public:
    virtual void withdraw(double amount); // redefined or overridden 
};

/* Virtual Destructors 
Solution/Rule:
    -> if a class has virtual functions
    -> it is provided with a virtual destructor 
    -> if base class destructor is virtual then all Derived class destructors are also virtual
*/

/*
class Account {
public:
    double m_amount;
public:
    virtual void deposit(double amount);
    virtual ~Account();
    Account();
    Account(double amount)
        : m_amount {amount} {}
};
*/

class Base {
public:
    virtual void say_hello() const;
    virtual ~Base() {}
};

class Derived: public Base {
public:
    virtual void say_hello() const override; 
    virtual ~Derived() {}
};




int main() {
    return 0;
}