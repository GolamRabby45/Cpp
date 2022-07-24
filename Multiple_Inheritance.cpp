// Multiple Inheritance

//1. A derived class with multiple base class is called multiple inheritance.
//2. There is an ambiguity problem in multiple inheritance.

#include<iostream>
using namespace std;

class Youtuber {
    int x;
public:
    Youtuber(int x)
        : x{x}
    {
        cout << "Youtuber" << endl;
    }
    void work () {
        cout << "Working as youtuber" << endl;
    }
};

class Engineer {
    int y;
public:
    Engineer(int y)
     : y{y}
    {
        cout << "Engineer" << endl;
    }
    void work () {
        cout << "Working as Engineer" << endl;
    }
};

class Golam: public Youtuber, public Engineer {

public:
    Golam(int x, int y): Youtuber(x), Engineer (y)
    {
        cout << "Golam" << endl;
    }
};




int main() {
    Golam g1 (1,2);
    g1.Youtuber::work();
    g1.Engineer::work();

    Engineer re = g1;

    re.work();

    return 0;
    
}