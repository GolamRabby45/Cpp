#include <iostream>
#include <string>

class Shallow {
private:
    int *data;
public:
    void set_data(int value) {
        *data = value;
    }

    int get_data(){
        return *data;
    }

    // Constructor definition 
    Shallow (int d);
    Shallow (const Shallow& source);

    ~Shallow();
};

Shallow::Shallow(int d) {
    data = new int; // heap storage allocation 
    *data = d;
}

Shallow::~Shallow(){
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

Shallow::Shallow(const Shallow& source)
    :data {source.data} {
        std::cout << "copy constructor" << std::endl;
}

void display_shallow(Shallow s){
    std::cout << s.get_data() << std::endl;
}

/*
    Shallow copy - only the pointer is copied- not what is pointing to!
    problem: source and the newly created object both point to the same data area!
*/



int main() {
    Shallow obj1 {100};
    display_shallow(obj1);
    return 0;
}