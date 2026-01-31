#include <iostream>
#include <string>
class A
{int x;
float f;
    public:
    
    A(int a=5, float b=2.5)
    {
        x=a;
        f=b;
    }
    void display()
    {
        std::cout<<x<<f;
    }
};
int main()
{
    A a1(4);
    a1.display();
    A a2(3,7.5);
        a2.display();
        A a3;
            a3.display();
}
