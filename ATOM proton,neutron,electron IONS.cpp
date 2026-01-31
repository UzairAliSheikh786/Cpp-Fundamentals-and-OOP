#include <iostream>
using namespace std;

class Atom {
private:
    int protons;
    int neutrons;
    int electrons;

public:
    Atom() {
        protons = 1;
        neutrons = 0;
        electrons = 1;
    }

    void getData() {
        cout << "Enter number of protons: ";
        cin >> protons;
        cout << "Enter number of neutrons: ";
        cin >> neutrons;
        cout << "Enter number of electrons: ";
        cin >> electrons;
    }

    void display() {
        cout << "Protons: " << protons << endl;
        cout << "Neutrons: " << neutrons << endl;
        cout << "Electrons: " << electrons << endl;
    }

   
    string isIon() const {
        if (protons != electrons)
            return "Yes";
        else
            return "No";
    }
};

int main() {
    Atom a1; 
    cout << "Default Atom (Hydrogen):" << endl;
    a1.display();
    cout << "Is Ion? " << a1.isIon() << endl << endl;

    Atom a2;
    cout << "Enter values for a new atom:" << endl;
    a2.getData();
    cout << "\nYou entered:" << endl;
    a2.display();
    cout << "Is Ion? " << a2.isIon() << endl;

    return 0;
}

