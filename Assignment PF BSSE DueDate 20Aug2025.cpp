//#include<iostream>
//using namespace std;
//int main() {
//    int arr[] = {1, 1, 1, 1, 1};
//    for (int i = 0; i < 5; i++) {
//        arr[i] = arr[i] + arr[i - 1];
//    }
//    for (int i = 0; i < 5; i++) {
//        cout << arr[i] << " ";
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Enter a number (65-90): ";
//    cin >> n;
//    if (n >= 65 && n <= 90) {
//        char ch = char(n);
//        for (int i = 1; i <= 5; i++) {
//            for (int j = 1; j <= i; j++) {
//                cout << ch;
//            }
//            cout << endl;
//        }
//    } else {
//        cout << "Out of range!";
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//    string nm[5];
//    int mk[5];
//    cout << "Enter name and marks of 5 students:\n";
//    for (int i = 0; i < 5; i++) {
//        cout << "Student " << i + 1 << " Name: ";
//        cin >> nm[i];
//        cout << "Marks: ";
//        cin >> mk[i];
//    }
//
//    int mxmk = mk[0];
//    int top = 0;
//    for (int i = 1; i < 5; i++) {
//        if (mk[i] > mxmk) {
//            mxmk = mk[i];
//            top= i;
//        }
//    }
//    cout << "\nTopper is: " << nm[top] 
//         << " with marks " << mxmk << endl;
//
//    return 0;
//}
#include <iostream>
using namespace std;
int main() {
    float sales[7], avg = 0;
    cout << "Enter sales for 7 days: ";
    for (int i = 0; i < 7; i++) {
        cin >> sales[i];
        avg += sales[i];
    }
    avg /= 7;

    int choice;
    cout << "Press 1 for Average, 2 for Below Average Days: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Average sales = " << avg;
            break;
        case 2: {
            int count = 0;
            for (int i = 0; i < 7; i++) {
                if (sales[i] < avg) count++;
            }
            cout << "Days with below average sales = " << count;
            break;
        }
        default:
            cout << "Invalid choice!";
    }
    return 0;
}

