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

double square(double x) {
    return x * x;
}

void print_square(double x) {
    cout << "The square of " << x << " is " << square(x) << endl;
}

void copy_fct() {
    int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int v2[10];

    for (auto i=0; i != 10; ++i) {
        v2[i] = v1[i];
    }
}

void print() {
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto x:v) {
        cout << x << '\n';
    }

    for (auto x: {15, 18, 29, 17, 92}) {
        cout << x << '\n';
    }
}

void create_player(string name, int hp, float x, float y, float z) {
    Vector v; // Creating instance of vector called v
    
    // Set instance variables
    v.x = x;
    v.y = y;
    v.z = z;

    Player player;

    player.name = name;
    player.hp = hp;
    player.position = v;

    cout << "You have created a player named " << player.name << " with " << player.hp << " HP." << endl;


}

void vector_testing() {
    // Warning: this will not work with anything less than C++11
    vector<int> vector_test {5, 8, 1, 3, 7, 9, 12, 10, 15};

    for (auto i = 0; i < vector_test.size(); i++) {
        cout << vector_test[i] << ' ';
    }
}

bool ask_question() {
    cout << "Does 2 + 2 actually equal 4?" << endl;

    char answer = 0;
    cin >> answer;

    switch (answer) {
        case 'y': 
            return true;
        case 'n': 
            return false;
        default:
            cout << "That is not a valid answer. This is taken as a no." << endl;
            return false;
    }

}


int main() {

    const int a = 10;
    cout << "Can't change this: " << a << endl;


    
    print_square(5);
    create_player("Stephen Hawking", 100, 2.0, 5.0, 8.0);
    vector_testing();
    print();

    ask_question();

}