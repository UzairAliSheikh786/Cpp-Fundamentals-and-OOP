#include<iostream>
#include<string>
using namespace std;
class rect{
	float length,width;
	public:
		float area,per;
		void area1()
		{
			cout<<"Enter lengt and width to calcute area";
			cin>>length>>width;
			area=length*width;
			cout<<"Area is:"<<area;
		}
		void per1()
		{
			cout<<"your perimeter is:";
			
			per=2*(length+width);
			cout<<per;
		}
};
int main()
{
	rect s1;
	s1.area1();
	s1.per1();
}
