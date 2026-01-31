//Create a function print that:
//If integer parameter is given, multiply it by 2 and print
//If float parameter is given, multiply it by 1.5 and print
//If string parameter is given, print it two times
#include<iostream>
#include<string>

using namespace std;

void print(int j){
	cout<<"INTEGER ENTERED:"<<j*2;
}
void print(float k){
	cout<<"FLOAT DETECTED:"<<k*1.5;
}
void print(string h){
	cout<<"STRING DETECTED:"<<h+h;
}

int main()
{
    int c=0,d=0;
    string o;
    cout<<"ENTER SOMETHING:";
    cin>>o;
    for(int i=0;i<o.size();i++)
    {
    	if(o[i]=='.')
    	{
    		c++;
    		break;
		}
	}

 for(int i=0;i<o.size();i++)
    {
    	if(o[i]!='.')
    	{
    		d++;
    		break;
		}
	}
if(d!=0&&c==0)
	{
	print(stoi(o));
	}
if(d==0&&c!=0)
	{
		
	print(stof(o));
	}	

 if(d==0&&c==0)
 {
 		
	print(o);
 }
 return 0;
}
