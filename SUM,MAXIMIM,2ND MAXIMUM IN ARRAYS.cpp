#include<iostream>
using namespace std;

int main() {
    
    int n[10],max,max2,sum=0,h;
    for(int i=0;i<10;i++)
   {
	cout<<"Enter A number";
    cin>>n[i];
    sum=n[i]+sum;//for sum of all arrays
   	}
   	max=n[0];//maximum value
   	max2=n[0];//2nd maximum value
        for(int i=0;i<10;i++)
   {
 
    	if(n[i]>max)//maximum value
    	max=n[i];//maximum value
    	if(n[i]<max&&n[i]>max2)//2nd maximum value
    	max2=n[i];//2nd maximum value
	}


cout<<"Enter your choice:\n1:SUM\n2:Max\n3:Second Maximum\n";
	cin>>h;	
	if(h==1){
		cout<<sum;
	}
	else if(h==2)
	  {
	  	cout<<max;
	  }
	else if(h==3)
	  {
	  	cout<<max2;
	  }
	else
	{
		cout<<"NOT GOOD CHOICE";
	}
   	} 