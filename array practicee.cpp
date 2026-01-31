////Write a C++ program that:
////Takes input of 5 integers in a 1D array.
////Calculates and displays the maximum, minimum, and average of those elements.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[5],sum=0,max,min;
//	cout<<"Enter 5 numbers:";
//	for(int i=0;i<5;i++)
//	{
//		cin>>a[i];
//		cout<<"\n";
//	}
//	max=a[0];
//	min=a[0];
//		for(int i=0;i<5;i++)
//{
//	sum+=a[i];
//	if(max<a[i])
//	max=a[i];
//	if(min>a[i])
//	min=a[i];
//}
//cout<<"Average:"<<sum/5<<endl;
//cout<<"Maximum:"<<max<<endl;
//cout<<"Minimum:"<<min<<endl;
//}
////Write a C++ program that:
////Takes input of 10 integers in a 1D array.
////Sorts the array using Bubble Sort in ascending order.
////Asks the user to enter a number to search, and checks whether it exists in the array using linear search.
////Displays the sorted array and the result of the search (found/not found and position if found).
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10],key,tem,k;
//	cout<<"Enter 5 numbers:";
//	for(int i=0;i<10;i++)
//	{
//		cin>>a[i];
//		cout<<"\n";
//	}
//	cout<<"Enter a Number You want to find:\n";
//	cin>>key;
//	for(int i=0;i<10;i++)
//	{
//		if(key==a[i])
//		{
//		cout<<"\nFOUNDED"<<endl<<"Position:"<<i+1;
//		k=1;
//		break;
//		}
//	}
//if(!k)	
//cout<<"Not Founded"	;
//for(int j=0;j<10-1;j++)
//{
//	for(int k=0;k<9-j;k++)
//	{
//		if(a[k]>a[k+1])
//		{
//		 tem=a[k];
//		 a[k]=a[k+1];
//		 a[k+1]=tem;
//		}
//	}
//}
//cout<<endl<<"SORTED ARRAY:"<<endl;
//	for(int i=0;i<10;i++)
//{
//	cout<<a[i]<<endl;
//}
//}
////Write a C++ program that:
////Takes 10 integers as input in a 1D array.
////Asks the user to enter a number to search.
////Counts and displays how many times the number occurs in the array.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10],key,c=0;
//	cout<<"Enter 10 numbers:";
//for(int i=0;i<10;i++)
//{
//	cin>>a[i];
//	cout<<endl;
//}
//cout<<"Enter a Number to check how many times it occurs:";
//cin>>key;
//for(int i=0;i<10;i++)
//{
//	if(key==a[i])
//	c++;
//}
//cout<<endl<<key<<" comes "<<c<<" times";}
////
////Q: Write a C++ program that:
////Takes input of 10 integers in a 1D array.
////Sorts the array using Bubble Sort in ascending order.
////Asks the user to enter a number to search.
////Uses Linear Search to:
////Check if the number exists in the array
////Display all positions where it is found (if repeated)
////Displays:
////The sorted array
////Result of the search: Found or Not Found
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10],key=0,temp=0,f;
//	cout<<"Enter 10 numbers:";
//for(int i=0;i<10;i++)
//{
//	cin>>a[i];
//	cout<<endl;
//}
//for(int j=0;j<10-1;j++)
//{
//	for(int k=0;k<9-j;k++)
//	{
//		if(a[k]>a[k+1])
//	{	temp=a[k];
//		a[k]=a[k+1];
//		a[k+1]=temp;
//	}	
//}
//	}
//cout<<"The sorted array:\n";
//for(int i=0;i<10;i++)
//{
//	cout<<a[i];
//	cout<<endl;
//}
//cout<<"Enter a number you want to search:";
//cin>>key;
//for(int i=0;i<10;i++)
//{
//	if(key==a[i])
//{
//	cout<<endl<<"Yes, we have Founded ";
//    cout<<a[i]<<" which is on index "<<i<<endl;
//    f=1;
//		}
//}
//if(!f)
//{
//	cout<<"NOT FOUNDED";
//}
//return 0;
//}
//
////Question:
////Write a C++ program that:
////Takes input of 10 integers in a 1D array
////Counts and displays how many numbers are even and how many are odd
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10],key=0,temp=0;
//	cout<<"Enter 10 numbers:";
//for(int i=0;i<10;i++)
//{
//	cin>>a[i];
//	cout<<endl;
//}
//for(int i=0;i<10;i++)
//{
//	if((a[i]%2)==0)
//	{
//		key++;
//	}
//    if((a[i]%2)!=0)
//	{
//		temp++;
//	}
//	
//	}
//	cout<<"Total no. of evens are: "<<key<<endl;
//    cout<<"Total no. of odds are: "<<temp;
//}
//
////Write a C++ program that:
////Takes 10 integers as input in a 1D array.
////Finds and displays the:
////Largest number
////Second largest number
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10],max=0,max2=0;
//	cout<<"Enter 10 numbers:";
//for(int i=0;i<10;i++)
//{
//	cin>>a[i];
//	cout<<endl;
//}
//max=a[0];
//max2=a[0];
//for(int i=0;i<10;i++)
//{   
//	if(max<a[i])
//	{
//	max=a[i];
//	}
//	if(max2<a[i] && a[i]<max)
//	{
//	max2=a[i];
//	}
//}
//cout<<"1ST LARGEST NUMBER ENTERD BY YOU:"<<max<<endl;
//cout<<"2ND LARGEST NUMBER ENTERD BY YOU:"<<max2<<endl;
//}

//Q: Write a C++ program that:
//Takes 10 integers as input in a 1D array.
//Displays:
//All even numbers
//All odd numbers
//The sum of even numbers
//The sum of odd numbers
#include<iostream>
using namespace std;
int main()
{
	int a[10],even=0,odd=0;
	cout<<"Enter 10 numbers:";
for(int i=0;i<10;i++)
{
	cin>>a[i];
	cout<<endl;
}
for(int i=0;i<10;i++)
{
	if((a[i]%2)==0)
	{
	even=even+a[i];
	cout<<"EVEN:"<<a[i]<<endl;
}
	
	if((a[i]%2)!=0)
	{
	odd=odd+a[i];
	cout<<"ODD:"<<a[i]<<endl;
	}
	}
	cout<<"Sum of Odds:"<<odd<<endl;
	cout<<"Sum of Evens:"<<even<<endl;
}