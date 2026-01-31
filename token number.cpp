#include <iostream>
using namespace std;

class Angle {
private:
    int degrees;
    float minutes;
    char direction;

public:
    void setAngle() {
        cout << "Enter degrees: ";
        cin >> degrees;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter direction (N/S/E/W): ";
        cin >> direction;
    }

    void displayAngle() const {
        cout << degrees << "°" << minutes << "' " << direction;
    }
};

class TokenNumber {
private:
    static int count;
    int serial;
    Angle latitude;
    Angle longitude;

public:
    TokenNumber() {
        serial = ++count;
    }

    void setPosition() {
        cout << "\nEnter latitude for token " << serial << ":\n";
        latitude.setAngle();

        cout << "Enter longitude for token " << serial << ":\n";
        longitude.setAngle();
    }


    void displayToken() const {
        cout << "\nToken Serial #: " << serial << endl;
        cout << "Latitude: ";
        latitude.displayAngle();
        cout << "\nLongitude: ";
        longitude.displayAngle();
        cout << endl;
    }
};

int TokenNumber::count = 0;

int main() {
    TokenNumber t1, t2, t3;

    t1.setPosition();
    t2.setPosition();
    t3.setPosition();

    t1.displayToken();
    t2.displayToken();
    t3.displayToken();

    return 0;
}

