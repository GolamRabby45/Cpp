#include <iostream>

class Something
{
private:
    int m_value1 {};
    double m_value2 {};
    char m_value3 {};

public:
    Something(int value1, double value2, char value3='c')
        : m_value1{ value1 }, m_value2{ value2 }, m_value3{ value3 } // directly initialize our member variables
    {
    // No need for assignment here
    }

    void print()
    {
         std::cout << "Something(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
    }

};

class Something
{
private:
    int m_value1 {};
    double m_value2 {};
    char m_value3 {};
    float m_value4 {};

public:
    Something(int value1, double value2, char value3='c', float value4=34.6f) // this line already has a lot of stuff on it
        : m_value1{ value1 } // one per line
        , m_value2{ value2 }
        , m_value3{ value3 }
        , m_value4{ value4 }
    {
    }

};






int main()
{
    Something something{ 1, 2.2 }; // value1 = 1, value2=2.2, value3 gets default value 'c'
    something.print();
    return 0;
}