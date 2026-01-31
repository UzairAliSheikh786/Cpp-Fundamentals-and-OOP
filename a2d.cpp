//Create a 2x3 matrix and display it after taking input values from user.
#include<iostream>

using namespace std;

int main()
{
	int a[2][3];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"ENTER INDEX "<<"["<<i<<"]"<<"["<<j<<"] : ";
			cin>>a[i][j];
		}
	}
	cout<<"MATRIX:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
	{
	    cout<<a[i][j];
	    cout<<" ";
	}
	 cout<<endl;
	}
}
