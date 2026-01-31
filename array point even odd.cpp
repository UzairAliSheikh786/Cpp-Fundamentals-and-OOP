//Declare an array of 10 integers.
//Use pointers to take input from the user.
//Count how many numbers are even and how many are odd using pointer arithmetic only (no arr[i]).
//Display the counts.
#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int *p=a;
	int e=0,o=0;
	for(int i=0;i<10;i++)
	{
		cin>>*(p+i);
		if(*(p+i)%2==0)
		 e++;
		if(*(p+i)%2!=0)
		 o++;
	}
	cout<<"Evens are:"<<e<<endl;
	cout<<"Odds are:"<<o<<endl;

}
