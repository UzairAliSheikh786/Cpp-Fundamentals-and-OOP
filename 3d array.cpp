//If the user enters this matrix:
//
//Copy
//Edit
//1  2  3  
//4  5  6  
//7  8  9
//The transpose will be:
//
//Copy
//Edit
//1  4  7  
//2  5  8  
//3  6  9

#include<iostream>
using namespace std;

int main() {
    int a[3][3];

    // Input: Take elements of the 3x3 matrix
    cout << "Enter elements of 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    // Display Original Matrix
    cout << "\nOriginal Matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Display Transpose
    cout << "\nTranspose of Matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
