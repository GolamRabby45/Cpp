#include<iostream>
#include<string.h>

using namespace std;

// constructors can help us initialize a class with private member variables 
// constructors have no return type


class Fraction
{
private:
    int m_numerator {};
    int m_denominator {};

public:
    Fraction() // default constructor
    {
        m_numerator = 0;
        m_denominator = 1;
    }

    int getNumerator() {

    return m_numerator; }

    int getDenominator() {
    return m_denominator; }

    double getValue() { 
    return static_cast<double>(m_numerator) / m_denominator; }
};

class Fraction
{
private:
    int m_numerator {};
    int m_denominator {};

public:
    Fraction() // default constructor
    {
         m_numerator = 0;
         m_denominator = 1;
    }

    // Constructor with two parameters, one parameter having a default value
    Fraction(int numerator, int denominator=1)
    {
        assert(denominator != 0);
        m_numerator = numerator;
        m_denominator = denominator;
    }

    int getNumerator() { return m_numerator; }
    int getDenominator() { return m_denominator; }
    double getValue() { return static_cast<double>(m_numerator) / m_denominator; }
};

int main()
{
    Fraction frac{}; // calls Fraction() default constructor
    // instantiating an object of type Fraction, object name frac
    // then performs value initialization of frac 
    // Fraction frac{}; @{} is called list-initialization
    // Fraction frac; // Default-initialization, calls default constructor
    // Fraction frac {}; // List-initialization with empty set of braces (leads to value-initialization)
    // Favor list-initialization over default-initialization for class objects
    // Constructors actually serve two purposes. First, constructors determine who is allowed to create an object. That is, 
    // an object of a class can only be created if a matching constructor can be found.


    std::cout << frac.getNumerator() << '/' << frac.getDenominator() << '\n';

    return 0;
}