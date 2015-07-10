#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>

struct Vector {
    float x, y, z;
};

struct Player {
    std::string name;
    int hp;
    Vector position;
};

struct Weapon {
    std::string name;
    int strength;
    Player creator;
    bool active;
};


class Math {
public:
    double square(double x) {
        return x * x;
    }

    void print_square(double x) {
        std::cout << "The square of " << x << " is " << square(x) << std::endl;
    }
};

class Test_Functions {
public:
    void create_player(std::string name, int hp, float x, float y, float z) {
        Vector v; // Creating instance of vector called v
        
        // Set instance variables
        v.x = x;
        v.y = y;
        v.z = z;

        Player player;

        player.name = name;
        player.hp = hp;
        player.position = v;

        std::cout << "You have created a player named " << player.name << " with " << player.hp << " HP." << std::endl;


    }

    void vector_testing() {
        // Warning: this will not work with anything less than C++11
        std::vector<int> vector_test {5, 8, 1, 3, 7, 9, 12, 10, 15};

        for (auto i = 0; i < vector_test.size(); i++) {
            std::cout << vector_test[i] << ' ';
        }
    }

    bool ask_question() {
        std::cout << "Does 2 + 2 actually equal 4?" << std::endl;

        char answer = 0;
        std::cin >> answer;

        switch (answer) {
            case 'y': 
                return true;
            case 'n': 
                return false;
            default:
                std::cout << "That is not a valid answer. This is taken as a no." << std::endl;
                return false;
        }

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
            std::cout << x << '\n';
        }

        for (auto x: {15, 18, 29, 17, 92}) {
            std::cout << x << '\n';
        }
    }
};



int main() {

    const int a = 10;
    std::cout << "Can't change this: " << a << std::endl;

    Test_Functions tf;
    Math math;
    
    math.print_square(5);
    tf.create_player("Stephen Hawking", 100, 2.0, 5.0, 8.0);
    tf.vector_testing();
    tf.print();

    tf.ask_question();

}