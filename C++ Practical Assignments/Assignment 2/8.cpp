// Write a C++ program to demonstrate the use of default arguments in function overloading
#include<iostream>
using namespace std;

class Default{
public:
    int sum(int a, int b, int c = 0)
    {
        return a+b+c;
    }

}def;

int main()
{
    int a, b, c;
    cout<<"\n Enter 1st number: ";
    cin>>a;

    cout<<"\n Enter 2nd number: ";
    cin>>b;

    cout<<"\n Enter 3rd number: ";
    cin>>c;

    cout<<"\n\n";

    cout<<"\n Sum of "<<a<<" and "<<b<<" = "<<def.sum(a,b);
    cout<<"\n Sum of "<<a<<" and "<<b<<" and "<<c<<" = "<<def.sum(a,b,c);
    return 0;
}