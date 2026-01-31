#include <iostream>
#include <string>
using namespace std;

class IceCream {
private:
    string flavor;
    string waffleType;
    bool hasTopping;
    int numScoops;
    double price;

public:
    // Constructor
    IceCream(string flv, string wf, bool top, int scoops) {
        flavor = flv;
        waffleType = wf;
        hasTopping = top;
        numScoops = scoops;
        price = (scoops * 300) + (top ? 100 : 0);
    }

    // Destructor
    ~IceCream() {
        cout << "Ice cream order deleted." << endl;
    }

    void displayOrder() {
        cout << "\n--- Your Order ---" << endl;
        cout << "Flavor: " << flavor << endl;
        cout << "Waffle Type: " << waffleType << endl;
        cout << "Topping: " << (hasTopping ? "Yes (+Rs.100)" : "No") << endl;
        cout << "Number of Scoops: " << numScoops << " (Rs." << numScoops * 300 << ")" << endl;
        cout << "Total Price: Rs." << price << endl;
    }

    double getPrice() { return price; }
};

int main() {
    IceCream* orders[25];
    int orderCount = 0;

    while (orderCount < 25) {
        cout << "\nBaskin Robin Order System (" << orderCount + 1 << "/25)";
        cout << "\n1. Place New Order\n2. View All Orders\n3. Exit\nChoice: ";
        
        int choice;
        cin >> choice;

        if (choice == 1) {
            string flavor, waffle;
            char topping;
            int scoops;

            cout << "\nAvailable Flavors: mango, vanilla, chocolate, strawberry" << endl;
            cout << "Enter flavor: ";
            cin >> flavor;

            cout << "Waffle Types: cone, cake, cornet" << endl;
            cout << "Enter waffle type: ";
            cin >> waffle;

            cout << "Add topping? (y/n): ";
            cin >> topping;
            bool hasTop = (tolower(topping) == 'y');

            cout << "Number of scoops (Rs.300 each): ";
            cin >> scoops;

            orders[orderCount] = new IceCream(flavor, waffle, hasTop, scoops);
            orderCount++;
            cout << "Order added successfully!";
        }
        else if (choice == 2) {
            double total = 0;
            for (int i = 0; i < orderCount; i++) {
                cout << "\nOrder #" << i + 1;
                orders[i]->displayOrder();
                total += orders[i]->getPrice();
            }
            cout << "\nTotal for all orders: Rs." << total << endl;
        }
        else if (choice == 3) {
            break;
        }
        else {
            cout << "Invalid choice!";
        }
    }

    // Clean up memory
    for (int i = 0; i < orderCount; i++) {
        delete orders[i];
    }

    cout << "\nThank you for visiting Baskin Robin!";
    return 0;
}
