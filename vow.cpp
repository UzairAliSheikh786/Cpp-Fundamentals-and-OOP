//Take a string input from user and create a function countVowels that counts vowels
// (a, e, i, o, u) in the string.

#include<iostream>
#include<string>
using namespace std;
void vowels(string v){
	int c=0;
	for(int i=0;i<v.size();i++)
{
	char b= tolower(v[i]);
    switch(b){
    	case 'a':
    	case 'e':
    	case 'i':
    	case 'o':
    	case 'u':
    		c++;
    	    break;
    
	}
		}
	if(c>0)
    cout<<"TOTAL VOWELS ARE: "<<c;
    else
    cout<<"NO VOWELS EXIST";
}
int main()
{  
   string vow;
   cout<<"ENTER STRING :";
   getline(cin,vow);
   vowels(vow);
 return 0;
}
