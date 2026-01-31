#include <iostream>
using namespace std;

// Structure of class
class Animal {
    
    // Private variables accessible only with the help of function.
    private: 
        int leg, eyes, ears;

    public:
        int sound, speed;
        void setData(int a1, int b1, int c1);  // Declaration only
        void getData() {
            cout << "The total legs are " << leg << endl;
            cout << "The total eyes are " << eyes << endl;
            cout << "The total ears are " << ears << endl;
            cout << "The sound is " << sound << endl;
            cout << "The average speed is " << speed << " km/h" << endl;
        }
};

// Definition of function setData
void Animal::setData(int a1, int b1, int c1) {
    leg = a1;
    eyes = b1;
    ears = c1;
}

int main() {
    Animal Dog;
    
    // You can access public variables directly
    Dog.sound = 56;
    Dog.speed = 75;
    
    // Accessing private variables with the help of function
    Dog.setData(4, 2, 2);
    
    Dog.getData();
    return 0;
}

