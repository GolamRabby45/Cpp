// Hierarchical Inheritance in C++

//1. Multiple derived classes with same base class is called hierarchical inheritance


#include<iostream>
using namespace std;

class Human {
public:
    void breathing() {
        cout << "i am breathing" << endl;
    }
};

class Youtuber: public Human {
public:
    void work() {
        cout << "creating videos" << endl;
    }
};

class Engineer: public Human {
public:
    void work() {
        cout << "Working on projects" << endl;
    }

};

class Doctor: public Human {
public:
    void work() {
        cout << " saving humans!" << endl;
    }
};





int main() {
    Youtuber y;
    y.breathing();
    y.work();

    Engineer e;
    e.breathing();
    e.work();

    Doctor d;
    d.breathing();
    d.work();

    return 0;
}

