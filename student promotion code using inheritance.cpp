/*Design a student information class having RegNo and Name as its data members.
Include input and display as member functions of the class.
Derive a class semester detail, which includes semesterNo and an array 
of 6 subjects titles and an array of marks. 
Extend the base class input and display function for subject and marks 
details. Add a result class that should be derived from the semester class. 
Compute semester promotion based on the below criteria.
If all subjects are passed with 40% marks, then the student is promoted. 
Otherwise not promoted. Promotion function have an access to marks array. 
Input and display functions will also be called in promotion function.
Main function is not required.*/
#include <iostream>
#include <string>
using namespace std;
class StudentInfo{
	public:
		string name;
		string rno;
		void input(){
			cout<<"Enter your name:"<<endl;
			getline(cin,name);
		cout<<"Enter your roll no:"<<endl;
			getline(cin,rno);		
		}
		
};
class semester: public StudentInfo{
	public:
		int semno;
		string sub[6];
		int marks[6];
		void semesterinfo()
		{
		cout<<"Enter your semester no:"<<endl;
		cin>>semno;
		cin.ignore();
		for(int i=0;i<6;i++)
		{
		cout<<"Enter subject no"<<(i+1)<<" titles of your course:"<<endl;
		getline(cin,sub[i]);
		cout<<"Enter marks in this subject:"<<endl;
		cin>>marks[i];
		cin.ignore();
		}
		}
		};
		class Result:public semester{
			public:
			
				void result()
				{   	int count;
					input();
				semesterinfo();     
						for(int i=0;i<6;i++)
						{ 	if(marks[i]<40)
							 count++;}
					     if(count==6)
						{
							cout<<"OOHO NOT PROMOTED"<<endl;
						}
						else
						{
							cout<<"PROMOTED";
						}
						
				}
		};
		int main()
		{ char choice;
			do
			{
			
			Result s;
			s.result();
			cout<<"Do you want to enter more data";
			cin>>choice;
		}while(choice=='y'||choice=='Y');}
