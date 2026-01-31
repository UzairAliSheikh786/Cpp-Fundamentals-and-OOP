#include<iostream>
#include<string>
using namespace std;
class car{
 public:
 	int year;
 	string model;
 	string brand;
 void cardata()
 	{
 		cout<<"Enter  your car year";
 		cin>>year;
 		cout<<"In which model you have:";
 		cin>>model;
 		cout<<"Enter brand name ofyour car:";
 		cin>>brand;
	 }
void output()
{
	cout<<"Your car year is"<<year;
	cout<<"Your car model is"<<model;
	cout<<"Your car brand name is"<<brand;
}
};

int main()

{
car s1;
for(int i=0;i<5;i++)
{
	s1.cardata();
	s1.output();
	}	
}
