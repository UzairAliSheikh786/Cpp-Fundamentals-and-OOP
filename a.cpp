//Create a file"data.txt"with 5 numbers.Then write a program that reads numbers 
//from the file,calculates their sum,and saves the result in a new file "result.txt".
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	string n;
	float m=0;
	int count=0;
	ifstream uzair("data.txt");
	cout<<"NUMBERS:";
	while(getline(uzair,n))
	{
		cout<<n<<endl;
		count++;
		int j= stoi(n);
		m=m+j;
	}
    cout<<"SUM IS:"<<m<<endl;
    cout<<"AVERAGE IS:"<<m/count<<endl;
    uzair.close();
    ofstream uzairali("result.txt",ios::app);
    uzairali<<"SUM IS :"<<m;
    uzairali<<"AVERAGE IS :"<<m/count;
	
}
