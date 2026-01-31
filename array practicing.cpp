#include<iostream>
using namespace std;

int main()
{
	int u[6],sum=0,max,min,avg,ch;
	
	for(int i=0;i<6;i++)
	{
		cout<<"Enter Number "<<i+1<<" : ";
		cin>>u[i];
		if(i==0)
		{max=u[0];
	min=u[0];
		}
		if(u[i]>max)
		{
	     max=u[i];
		 }
		if(u[i]<min)
		{
			min=u[i];
		}
		sum=sum+u[i];
		
	}
	do{
	cout<<"\nEnter your choice:\n1.Maximum Number\n2.Minimum Number\n3.Average\n4.Sum\n5.Exit\n";
	cin>>ch;
	switch(ch)
	{
    case 1:
			cout<<"Maximum Numer is "<<max;
			break;
	
	case 2:
		cout<<"Minimum Numer is "<<min;
			break;
    case 3:
		cout<<"Average is "<<sum/6;
		break;
	case 4:
		cout<<"Sum is "<<sum;
	break;
	case 5:
		cout<<"Exitinggggggggggggggggg";
default:
	cout<<"Invalid Choice";
}
	}while(ch!=5);
	}
	
