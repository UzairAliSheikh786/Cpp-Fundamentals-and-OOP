#include<iostream>
#include<string>
using namespace std;
class book{
 public:
 	string title ;
 	int price;
 	string author;
 void bookdata()
 	{
 		cout<<"Enter the book title:";
 		cin>>title;
 		cout<<"name the author";
 		cin>>author;
 		cout<<"Enter the price of book";
 		cin>>price;
	 }
void output()
{
	cout<<"book title:"<<title;
	cout<<"author is:"<<author;
	cout<<"Price is:"<<price;
}
};

int main()

{
book s1;
for(int i=0;i<5;i++)
{
	s1.bookdata();
	s1.output();
	}	
}
