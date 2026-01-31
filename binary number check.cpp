#include<iostream>
#include<string>
using namespace std;
class binary{
	string s;
	public:
		void read(void);
		void chk_bin(void);
		void display(void);
		void compliment(void);
};
void binary :: read(void)
{
	cout<<"Enter binary number:"<<endl;
	cin>>s;
}
void binary :: chk_bin(void)
{
	for(int i=0;i<s.length();i++)
	if(s.at(i)!='0' && s.at(i)!='1')
	{cout<<"not a binary";
	exit(0);
	 }
}
void binary :: compliment(void)
 {
 for (int i = 0; i < s.length(); i++)
 { if(s.at(i)=='1')
{
	s.at(i)='0';
}
else{

s.at(i)='1';
}
}}
void binary :: display(void)
{
	cout<<"Displaying complimented number:"<<endl;
	for(int i=0;i<s.length();i++)
	{
		cout<<s.at(i);
	}
	cout<<endl;
}
int main()
{

char choice;
do {
    binary b;
    b.read();
    b.chk_bin();
    b.compliment();
    b.display();

    cout << "Do you want to continue? (y/n): ";
    cin >> choice;
} while (choice == 'y' || choice == 'Y');
}
