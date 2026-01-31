//File "input.txt" mein 10 numbers store hain. Ek program likho jo file se
//numbers read karke unka average calculate kare aur result "output.txt" 
//file mein save kare.
#include<iostream>
#include<string>
#include<fstream>

using namespace std;
int main()
{ 
  int m=0;
  string n;
  ifstream uz("input.txt",ios::in);
  while(getline(uz,n)){
  	cout<<n;
  	cout<<endl;
  }

 
 for(int i=0;i<9;i++)
 {
 	 int j=stoi(n);
    m=m+j;
 }
   ofstream uza("output.txt",ios::app);
   uza<<endl<<"AVERAGE:"<<m/10;
 return 0;
}
