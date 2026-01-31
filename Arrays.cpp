#include<iostream>
using namespace std;

int main() {
   
   int st[10],sum=0;
   for(int i=0;i<10;i++)
   { 
    cout<<"Enter Marks of Student no "<<i + 1<<" : ";
   	cin>>st[i];
   	sum=sum+st[i];
   }
   cout<<"TOTAL MARKS OF ALL SUDENTS ARE: "<<sum;
    return 0;
}
