#include<string>
#include<cstring>
#include<iostream>

/*
    Notes--------------

    Derived::Derived(const Derived& other)
        : Base {other}, initialization list
        -- Base {other} means we are calling the copy constructor of the Base class
        {
            std::cout << "write my code here: " << std::endl;
        }

*/

/* copy constructor template 
    class Base {
        int value;
    public:
        Base(const Base& other)
            : value {other.value} {
                std::cout << " copy constructor of the Base " << std::endl;
            } 
    };

    class Derived: public Base {
        int doubled_value;
    
    public:
        Derived(const Derived& other)
            : Base {other}, doubled_value {other.doubled_value} {
                std::cout << "Derived copy "
            }

    };
*/

/* 
    Overloaded copy assignment operator= 

    class Base {
        int value;
    public:
        Base &operator=(const Base& rhs) {
            if(this != rhs.value)
                value = rhs.value; // assign
            
            return *this;
        }
    };

    class Derived: public Base {
        int doubled_value;
    public:
        Derived &operator=(const Derived& rhs) {
            if(this != rhs) 
                Base::opeator=(rhs); // assign Base part
                doubled_value = rhs.doubled_value; // assign derived part
            
            return *this;
        }
    };
*/

class Base {
private:
    int m_value;
public:
    Base()
        : m_value {0} {
            std::cout << "no-args contructor of Base class: " << std::endl;

        }

    Base(int value)
        : m_value {value} {
            std::cout << "Overloaded contructor of Base class: " << std::endl;

        }

    Base(const Base& other)
        : m_value {other.m_value} {
            std::cout << "copy contructor of Base class: " << std::endl;
        }
    
    Base &operator=(const Base& rhs) {
        std::cout << "operator overloading constructor of Base class: " << std::endl;
        if(this == &rhs)
            return *this;
        m_value = rhs.m_value;
        return *this;
    }

    ~Base(){
        std::cout << "destructor called for Base class: " << std::endl;
    } 
};

class Derived: public Base {
private:
    int m_doubled_value;
public:
    Derived()
        : m_doubled_value {0} {}
    
    Derived(int doubled_value)
        : Base (doubled_value), m_doubled_value {doubled_value} {}
    
    Derived(const Derived& other)
        : Base (other), m_doubled_value {other.m_doubled_value} {}
    
    Derived &operator=(const Derived& rhs){
        if(this == &rhs)
            return *this;
        Base::operator=(rhs);
        m_doubled_value = rhs.m_doubled_value;
        return *this;   
    }

    ~Derived(){}
};


int main() {

    Base b {100};
    Base b1 {b};
    b = b1; 

    Derived d {200};
    Derived d1 {d};
    d = d1;
    return 0;
}