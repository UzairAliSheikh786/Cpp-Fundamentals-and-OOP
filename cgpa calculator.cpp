#include<iostream>
using namespace std;

// Function to return grade point based on percentage
float getGradePoint(float percentage) {
    if (percentage >= 80) return 4.0;
    else if (percentage >= 65) return 3.0;
    else if (percentage >= 50) return 2.0;
    else if (percentage >= 40) return 1.0;
    else return 0.0;
}

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    int ch[50], om[50];
    float gp[50];
    float tq = 0, tc = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i+1 << " Credit Hours (e.g. 3, 4, 5): ";
        cin >> ch[i];

        int tm = ch[i] * 20;
        cout << "Total Marks: " << tm << endl;

        cout << "Enter Obtained Marks: ";
        cin >> om[i];

        float perc = (om[i] * 100.0) / tm;
        gp[i] = getGradePoint(perc);

        tq += gp[i] * ch[i];
        tc += ch[i];

        cout << "Grade Point: " << gp[i] << endl;
    }

    float cgpa = tq / tc;
    cout << "\nYour Final CGPA: " << cgpa << " / 4.0\n";

    return 0;
}
