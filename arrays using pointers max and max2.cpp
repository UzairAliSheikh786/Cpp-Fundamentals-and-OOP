//Declares an array of 8 integers.
//Uses pointers to take input from the user.
//Finds the second largest element in the array using pointer arithmetic only (no arr[i]).
//Displays the result.
#include<iostream>
using namespace std;
int main()
{
  int a[8];
  int*p=a;
  int mx;
  int mx2;
  mx=*p;
  mx2=*p;
  for(int u=0;u<8;u++)
  {
  	cin>>*(p+u);
  	if(mx<*(p+u))
  	mx=*(p+u);
  	if(mx2<*(p+u)&&mx2<mx)
  	mx2=*(p+u);
  }
  cout<<"Max:"<<mx;
  cout<<endl<<"2nd Max:"<<mx2;
  
}
