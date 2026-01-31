//Take a string input from user, and display its length using strlen().
#include<iostream>
using namespace std;
int main()
{
//	char ch[45];
//	cin>>ch;
//	int l=strlen(ch);
//	cout<<endl<<l;
//char a[40],b[40];
//cin>>b;
//strcpy(a,b);
//cout<<a<<" "<<b;
//char a[12],b[13],c[50];
//cin>>a;
//cout<<"b:";
//cin>>b;
//strcat(a,b);
//cout<<a;
char a,b[40];
cin>>b;
cin>>a;
char *m=strchr(b,a);
if(*m != NULL){cout<<"fonded"<<(m - b);
}
}
