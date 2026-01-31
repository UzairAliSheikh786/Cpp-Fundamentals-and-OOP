#include<iostream>
using namespace std;
int main()
{
	int a[3][3],sum=0,max;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Element no"<<"["<<i+1<<"]"<<"["<<j+1<<"]";
			cin>>a[i][j];
		if(i == 0 && j == 0)
				max = a[i][j];
			else if(a[i][j] > max)
				max = a[i][j];

			sum += a[i][j];
		}
	}
for(int i=0;i<1;i++)
{
		for(int j=0;j<3;j++)
		{
		cout<<a[i][j]<<"   ";	
}}
cout<<endl;
for(int i=1;i<2;i++)
{
		for(int j=0;j<3;j++)
		{
		cout<<a[i][j]<<"   ";	
}
}
cout<<endl;
for(int i=2;i<3;i++)
{
		for(int j=0;j<3;j++)
		{
		cout<<a[i][j]<<"   ";	
}
}
cout<<endl<<"YOUR SUM IS   "<<sum;
cout<<endl<<"YOUR max IS   "<<max;
}


