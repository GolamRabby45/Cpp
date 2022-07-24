#include <iostream>
#include <string>
using namespace std;

class Player {

    //attributes
public:
    string name;
    int health;
    int xp;

public:
//Player (string name_val="None", int health = 0, int xp = 0);

    Player::Player (string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        
        cout << "Three-args constructor" << endl;

    } 
};

int main() {
    Player empty;
    Player frank {"frank"};
    Player hero {"hero", 100};
    Player villain {"villain", 100, 200};

    return 0;
}


