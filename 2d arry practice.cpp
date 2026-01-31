#include <iostream>
using namespace std;

class Matrix {
private:
    int arr[10][10];  // Fixed 10x10 matrix
    int rows, cols;   // Actual dimensions specified by user

public:
    // Constructor: initializes size
    Matrix(int r, int c) {
        if (r <= 10 && c <= 10) {
            rows = r;
            cols = c;
        } else {
            cout << "Error: Matrix size too large! Using default size 10x10.\n";
            rows = 10;
            cols = 10;
        }

        // Initialize array elements to 0
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
                arr[i][j] = 0;
    }

    // Function to insert element with bounds checking
    void putel(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            arr[r][c] = value;
        } else {
            cout << "Error: Index out of bounds (" << r << ", " << c << ")\n";
        }
    }

    // Function to get element with bounds checking
    int getel(int r, int c) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return arr[r][c];
        } else {
            cout << "Error: Index out of bounds (" << r << ", " << c << ")\n";
            return -1; // return error value
        }
    }
};

int main() {
    // Based on Arid Number 20-Arid-254 ? Matrix size 5x4
    Matrix m1(5, 4);

    int temp = 12345;

    // Insert value at valid index
    m1.putel(3, 2, temp);

    // Retrieve and display the value
    temp = m1.getel(3, 2);
    cout << "Value at position (3,2): " << temp << endl;

    // Attempt to access out-of-bounds index (for testing)
    m1.putel(7, 4, 999);    // Invalid index
    temp = m1.getel(7, 4);  // Invalid index

    return 0;
}

