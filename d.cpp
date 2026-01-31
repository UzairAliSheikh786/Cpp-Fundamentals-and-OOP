//C++ is a very extensive language that can be used both within basic structured 
//and object oriented programming. C++ is mostly used in the situation where 
//processor time and performance are ultimate, this is due to the fact that C++
//compiler optimizes the code to each specific processor type.

//Store this paragraph in the character array and when user press the X key then
//your program must display the total sentences in the paragraph. Also, display
//each sentence on a separate line
#include<iostream>
using namespace std;
int main()
{
	char para[]={"C++ is a very extensive language that can be used both within basic structured and object oriented programming. C++ is mostly used in the situation where processor time and performance are ultimate, this is due to the fact that C++compiler optimizes the code to each specific processor type."};
    char i;
    int count=0;
    for(int i=0;i<300;i++)
    { cout<<para[i];
    	if(para[i]=='.')
    	{
    		count++;
    		cout<<endl;
		}
	}
	cout<<"no of lines in para graph"<<count;
	cout<<"PRESS X FOR stop";
	cin>>i;
	if(i=='X'){
		return 0;
	}
}

