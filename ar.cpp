//Create a 3x3 matrix and take input values from user. Then create a function findMax that finds
// and returns the maximum value from the matrix.
//Create a function print that:
//If integer parameter is given, multiply it by 2 and print
//If float parameter is given, multiply it by 1.5 and print
//If string parameter is given, print it two times
#include<iostream>
#include<string>
using namespace std;
void maxi(int k[][3],int m){
	 for(int i=0;i<3;i++)
   {
   	for(int j=0;j<3;j++)
   	{
	   if(m<k[i][j])
	   m=k[i][j];
	   }
	   }
	cout<<endl<<"MAXIMUM VALUE IS: "<<m;
}
int main()
{  
   int a[3][3];
   for(int i=0;i<3;i++)
   {
   	for(int j=0;j<3;j++)
   	{
   		cout<<"ENTER NUMBER ["<<i<<"]"<<"["<<j<<"]";
   		cin>>a[i][j];
   		cout<<"   ";
	   }
	   cout<<endl;
   }
   int max=a[0][0];
    maxi(a,max);
 return 0;
}
