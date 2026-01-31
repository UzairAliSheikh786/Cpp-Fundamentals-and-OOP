#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class student {
  
    string id;
    float gpa;
    string fname;
    string name;
    int semester;

public:
    void studentData() {    

       cin.ignore();
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter student's Father name: ";
        getline(cin, fname);

        cout << "Enter student's Roll no: ";
        getline(cin, id);

        cout << "Enter student's GPA: ";
        cin >> gpa;

        cout << "Enter the semester number in which student is enrolled: ";
        cin >> semester;
    }

    void displayData() { 
	ofstream uzair("Student record using classes and recursion of main function.txt",ios::app); 
        if(uzair.is_open())
		{
		uzair<< "============================================\n";
        uzair<< "       STUDENT RECORD SYSTEM      \n";
        uzair << "============================================\n";
        
        uzair << "Name: " << name << endl;
        uzair << "Father's Name: " << fname << endl;
        uzair << "Roll No: " << id << endl;
        uzair << "GPA: " << gpa << endl;
        uzair << "Semester: " << semester << endl;
        uzair << "------------------------------------\n";
    }
    else
       cout<<"Unable to open file";
	}
	
};


int main()
 {
 	 cout << "============================================\n";
     cout << "      WELCOME TO STUDENT RECORD SYSTEM      \n";
     cout << "============================================\n";
    char ch;
    do {
        student s1;
        s1.studentData();
        s1.displayData();

        cout << "Do you want to add more students in record (y/n): ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    return 0;
}

