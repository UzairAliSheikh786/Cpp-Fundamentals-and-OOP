//Declares an array of 8 integers.
//Uses pointers to take input from the user.
//Finds the second largest element in the array using pointer arithmetic only (no arr[i]).
//Displays the result.
#include<iostream>
using namespace std;
int main()
{
  int ae[8];
  int*i=ae;
  int max;
  int mx2;
  max=*i;
  mx2=*i;
  for(int u=0;u<8;u++)
  { cout<<"Enter a number:"<<endl;
  	cin>>*(i+u);
  	if(max<*(i+u))
  	max=*(i+u);
  	if(*(i+u)!=mx2&&mx2<*(i+u))
  	mx2=*(i+u);
  }
  cout<<"Max:"<<max;
  cout<<endl<<"2nd Max:"<<mx2;
  
}
