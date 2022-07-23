// dynamic_cast in C++
// syntax: dynamic_cast<new_type>(expression)

//1. dynamic_cast is used at run time to find out correct down-cast
// Note0: Need at least one virtual function in base class
// Note1: if the cast is successful, dynamic_cast returns a value of type new_type
// Note2: if the cast fails and the nwe_type is a pointer type, it returns a null pointer of that type
// Note3: if the cast fails and new_type is a reference type, it throws an exception that matches a handler of type std::bad_cast  



#include<iostream>
using namespace std;

class Base {
    virtual void print() {
        cout << "Base:" << endl;
    }
};

class Derived1: public Base {
    void print() {
        cout << "Derived1:" << endl;
    }
};

class Derived2:public Base {
    void print() {
        cout << "Derived2:" << endl;
    }
};

int main() {
    Derived1 d1;

    Base* bp1 = dynamic_cast<Base*>(&d1);

    Derived2* dp2 = dynamic_cast<Derived2*>(bp1);  // Invalid! 
    if(dp2 == NULL) {
        cout << "NULL:" << endl;
    }

}

// Key Points:
// 1. work only on polymorphic base class (at least one virtual function in base class)
// because it uses this information to decide about wrong down-cast
// 2. It is used for up-cast (D->B) and down cast (B->D), but it is mainly used for correct downcast.
// 3. using this cast has run time overhead, because it checks object types at run time using RTTI (Run time Type Information)
// 4. if we are sure that we will never cast to wrong object then we should always avoid this cast and use static_cast 


