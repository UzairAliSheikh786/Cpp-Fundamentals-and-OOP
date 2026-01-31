#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student{
 public:
 	int sem;
 	string name;
 	float gpa;
 void studentdata()
 	{   
 		cout<<"Enter  your name";
 		cin>>name;
 		cout<<"In which semester are you enrollled";
 		cin>>sem;
 		cout<<"Enter your last smester gpa";
 		cin>>gpa;
	 }
void output()
{    fstream uzair("student1.txt" ,ios::app);
	uzair<<"Your name is"<<name;
	uzair<<"Your semester is"<<sem;
	uzair<<"Your gpa is"<<gpa;
}
};

int main()

{
student s1;
for(int i=0;i<5;i++)
{
	s1.studentdata();
	s1.output();
	}	
}
