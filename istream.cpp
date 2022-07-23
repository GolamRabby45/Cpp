#include <iostream>
#include <cstring>
#include <cctype>

/*
    std::istream& operator>>(std::istream& is, const Mystring& obj){
        char *buff = new char[1000];
        is >> buff;

        obj = Mystring {buff};
        delete [] buff;
        return is;
    }
*/
class Mystring {
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs); 
public:
    char *str;     
public:
    Mystring();                                                         
    Mystring(const char *s);                                     
    Mystring(const Mystring &source);                   
    Mystring( Mystring &&source);                       
    ~Mystring();                                                  
    
    Mystring &operator=(const Mystring &rhs); 
    Mystring &operator=(Mystring &&rhs);      
    
    void display() const;
    
    int get_length() const;                                
    const char *get_str() const;
};

Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[std::strlen(source.str)+ 1];
        std::strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;

}

Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
}

Mystring::~Mystring() {
    delete [] str;
}

Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

Mystring &Mystring::operator=( Mystring &&rhs) {
    std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}


int Mystring::get_length() const { return std::strlen(str); }

const char *Mystring::get_str() const { return str; }

bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

Mystring operator-(const Mystring &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (size_t i=0; i<std::strlen(buff); i++) 
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

int main() {
    Mystring larry {"Larry"};
    Mystring moe {"Moe"};
    Mystring curly;

    std::cin >> curly;
    std::cout << larry << moe << curly;

    return 0;
}