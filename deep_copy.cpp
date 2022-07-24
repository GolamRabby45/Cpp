#include <iostream>
#include <string>

class Deep {
private:
    int *data;
public:
    void set_data(int value){
        *data = value;
    }

    int get_data(){
        return *data;
    }

    Deep(int d);
    Deep(const Deep& source);
    ~Deep();

};

Deep::Deep(int d){
    data = new int;
    *data = d;
}

Deep::Deep(const Deep& source)
    : Deep {*source.data} {
    std::cout << "copy constructor" << std::endl;
}

/*
Deep::Deep(const Deep& source){
    data = new int;
    *data = *source.data;
    std::cout << "copy constructor" << std::endl;
}*/

Deep::~Deep(){
    delete data;
    std::cout << "destructor called" << std::endl;
}

void display (Deep s){
    std::cout << s.get_data() << std::endl;
}

int main() {

    Deep dep {200};
    display(dep);

    Deep dep1 {dep};
    dep1.set_data(1000);
    dep1.get_data();
    //dep1.get_data();

    /*dep1.set_data(1000);
    display(dep1);*/
    return 0;
}