//Take two 3x3 matrices from user and perform addition, subtraction and multiplication.
// Create separate functions for each operation.
//Operations:
//addMatrices()
//subtractMatrices()
//multiplyMatrices()
#include<iostream>
#include<string>

using namespace std;
void addmatrix(int a0[][3],int b0[][3]){
	 int c[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
       {
	   c[i][j]=a0[i][j]+b0[i][j];
	   cout<<a0[i][j]<<"+"<<b0[i][j];
	   cout<<"  ";
	   }
	   cout<<endl;
	   }
	   cout<<"AFTER ADDING MATRIXES:"<<endl;
	   	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
       {
	   cout<<c[i][j];
	   cout<<"  ";
	   }
	   cout<<endl;
	   }
}
void submatrix(int a1[][3],int b1[][3]){
	 int c1[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
       {
	   c1[i][j]=a1[i][j]-b1[i][j];
	   cout<<a1[i][j]<<"-"<<b1[i][j];
	   cout<<"  ";
	   }
	   cout<<endl;
	   }
	   cout<<"AFTER SUBTRACTING MATRIXES:"<<endl;
	   	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
       {
	   cout<<c1[i][j];
	   cout<<"  ";
	   }
	   cout<<endl;
	   }
}
void mulmatrix(int a2[][3],int b2[][3]){
	 int c2[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
       {
      
	   c2[i][j]+=a2[i][j]*b2[i][j];
//	   cout<<a2[i][k]<<"*"<<b2[k][j];
//	   cout<<"  ";
	   }
//	   cout<<endl;
	   }

	   cout<<"AFTER MULTIPLING MATRIXES:"<<endl;
	   	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
       { 		for(int k=0;k<3;k++)
       {
	  
	   } cout<<c2[i][j];
	   cout<<"  ";
	   
	  
	   } cout<<endl;
}}
int main()
{
	int a[3][3],b[3][3],k;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
       {
       	cout<<"Enter number in 1st matrix index ["<<i<<"]"<< "["<<j<<"]";
       	cin>>a[i][j];
       	cout<<endl<<"Enter number in 2nd matrix index ["<<i<<"]"<< "["<<j<<"]";
       	cin>>b[i][j];
	   }
	}
    cout<<"What do you want?"<<endl<<"1. ADD MATRIX"<<endl
    <<"2. SUBTRACT MATRIX"<<endl<<"3. MULTIPLY MATRIX"<<endl;
    cin>>k;
    switch(k)
    {
    	case 1:
	         addmatrix(a,b);
	         break;
	    case 2:
	         submatrix(a,b);
	         break;
	    case 3:
	         mulmatrix(a,b);
	         break;
	         
	}
return 0;
}
