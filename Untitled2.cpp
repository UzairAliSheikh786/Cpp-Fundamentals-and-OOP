#include<iostream>
using namespace std;
int main()
{
	int a[10],s=0;
	int *p=a;
	cout<<"Enter 10 nuumbers:";
	for(int i=0;i<10;i++)
	{
		cin>>*(p+i);
		s=s+*(p+i);
	}
	cout<<endl<<"Sum of Given Numbers:"<<s;
	cout<<endl<<"Average of Given Numbers:"<<s/10.0;

}
