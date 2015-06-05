#include <iostream>
using namespace std;

struct Vector {
    float x, y, z;
};

struct Player {
    string name;
    int hp;
    Vector position;
};


int main() {
    Vector v; // Creating instance of vector called v
    
    // Set instance variables
    v.x = 20.2;
    v.y = 50.4;
    v.z = 100.1;

    // cout << "A 3-space vector at " << v.x << ", " << v.y << ", " << v.z << endl;

    Player me; // Instance of Player called me

    me.name = "Richard Dawkins";
    me.hp = 100;
    me.position.x = me.position.y = me.position.z = 0; // Set all values to 0
    cout << "My player's name is: " << me.name << endl;

    Player* ptrMe; // Declare a pointer for Player
    ptrMe = &me; // Link to instance me
    
}