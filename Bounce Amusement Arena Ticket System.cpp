#include <iostream>
using namespace std;

class Arena {
private:
    int totalAdults;
    int totalKidsUnder8;
    int totalKids8to12;
    double totalIncome;

public:
    Arena() {
        totalAdults = 0;
        totalKidsUnder8 = 0;
        totalKids8to12 = 0;
        totalIncome = 0;
    }

    ~Arena() {
        cout << "Arena closed for the day." << endl;
    }

    void addEntry(int adults, int kidsUnder8, int kids8to12) {
        // Calculate free adults (1 per kid under 8)
        int freeAdults = (adults > kidsUnder8) ? kidsUnder8 : adults;
        int payingAdults = adults - freeAdults;

        totalAdults += adults;
        totalKidsUnder8 += kidsUnder8;
        totalKids8to12 += kids8to12;
        totalIncome += (payingAdults * 800) + ((kidsUnder8 + kids8to12) * 800);

        cout << "Entry recorded. ";
        if (freeAdults > 0) {
            cout << freeAdults << " adult(s) entered free with kids under 8.";
        }
        cout << endl;
    }

    void displayStats() {
        int totalKids = totalKidsUnder8 + totalKids8to12;
        int totalPersons = totalAdults + totalKids;

        cout << "\n--- Daily Statistics ---" << endl;
        cout << "Total Adults: " << totalAdults << endl;
        cout << "Total Kids Under 8: " << totalKidsUnder8 << endl;
        cout << "Total Kids 8-12: " << totalKids8to12 << endl;
        cout << "Total Persons: " << totalPersons << endl;
        cout << "Total Income: Rs." << totalIncome << endl;
    }
};

int main() {
    Arena bounce;
    int choice;

    do {
        cout << "\nBounce Amusement Arena";
        cout << "\n1. Add Entry\n2. View Statistics\n3. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            int adults, kidsUnder8, kids8to12;
            cout << "Number of adults: ";
            cin >> adults;
            cout << "Number of kids under 8: ";
            cin >> kidsUnder8;
            cout << "Number of kids 8-12: ";
            cin >> kids8to12;

            bounce.addEntry(adults, kidsUnder8, kids8to12);
        }
        else if (choice == 2) {
            bounce.displayStats();
        }
        else if (choice == 3) {
            cout << "Exiting system...";
        }
        else {
            cout << "Invalid choice!";
        }
    } while (choice != 3);

    return 0;
}
