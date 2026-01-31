//Declares an array of 10 integers.
//Uses pointers to take input from the user.
//Calculates the sum and average of all elements using pointer arithmetic only (no arr[i]).
//Displays the result.
#include<iostream>
using namespace std;
int main()
{  
    int sm=0;
    int a[10];
    int*p=a;
    for(int i=0;i<10;i++)
    {
    	cout<<"Enter a Number:"<<endl;
    	cin>>*(p+i);
    	sm=*(p+i)+sm;
	}
    cout<<"Sum:"<<sm;
    cout<<endl<<"Average:"<<sm/10;
}

