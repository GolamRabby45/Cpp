#include<string>
#include<cstring>
#include<iostream>

/*
    when a derived object is created
        -> base class constructor executes then 
        -> derived class constructor executes
*/

/* 
    class Base {
    public:
        int x;
    
        Base(): x{0} {
            std::cout << "no-args constructor" << std::endl;
        }
        Base(int value) : x{value} {
            std::cout << "base class overloaded contructor called: " << std::endl;
    
        }

    };

    class Derived: public Base {
        public:
            int doubled_value;

            Derived()
                : Base {}, doubled_value {0} {
                    std::cout << "Derived no-args constructor " << std::endl;
                
                }
            
            Derived(int x)
                : Base {x}, doubled_value {x*2} {
                     std::cout << "Derived overloaded constructor " << std::endl;
                }
    };
*/




int main() {
    return 0;
}