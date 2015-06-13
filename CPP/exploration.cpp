#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>

using namespace std;

struct Vector {
    float x, y, z;
};

struct Player {
    string name;
    int hp;
    Vector position;
};

struct Weapon {
    string name;
    int strength;
    Player creator;
    bool active;
};


int main() {
    Vector v; // Creating instance of vector called v
    
    // Set instance variables
    v.x = 20.2;
    v.y = 50.4;
    v.z = 100.1;

    cout << "Memory address of x: " << &v.x << endl;

    cout << "A 3-space vector at " << v.x << ", " << v.y << ", " << v.z << endl;

    Player me; // Instance of Player called me
    Weapon axe; //

    me.name = "Richard Dawkins";
    me.hp = 100;
    me.position.x = me.position.y = me.position.z = 0; // Set all values to 0
    cout << "My player's name is: " << me.name << endl;

    axe.name = "Axe";
    axe.strength = 25;
    axe.creator = me;
    axe.active = true;

    Player* ptrMe; // Declare a pointer for Player
    ptrMe = &me; // Link to instance me

    cout << "Memory address of me: " << ptrMe << endl;

    ptrMe->name = "Sam Harris"; // Using the pointer to change player's name

    printf("Using printf instead of cout to display this name: %s", me.name.c_str());
    cout << "My player's name is now: " << me.name << endl;

    // Control flow
    int x = 1;
    int y = 0;

    int test = 25;

    cout << "Is x equal to y? C++ says: " << boolalpha << (x == y) << endl;
    cout << "Variable 'test' turned into Boolean: " << !!test << endl;

    cout << "My first weapon is an " << axe.name << endl;

    bool isHungry = true;

    if (true == isHungry) { // Yoda format
        cout << "Let's eat!" << endl;
    } else {
        cout << "Don't stuff your face!" << endl;
    }

    vector<int> vector_test;
    int test_input;
    test_input = 5;
    vector_test.push_back(test_input);

    cout << "My vector contains " << vector_test.size() << " elements." << endl;


}