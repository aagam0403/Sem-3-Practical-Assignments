// Write a C++ program to calculate the area of circle, rectangle and square using function
// overloading.
#include<iostream>
using namespace std;

class Overloading{
public:
    void area(int a)
    {
       cout<<"\n The area of square with side "<<a<<" is = "<<(a*a); 
    }
    void area(int a, int b)
    {
       cout<<"\n The area of retangle with length "<<a<<" and breadth "<<b<<" is = "<<(a*b); 
    }
    float area(float a)
    {
       cout<<"\n The area of circle with radius "<<a<<" is = "<<(3.14 * a * a); 
    }
}o;
int main()
{
    int a, b, op;
    float rad;
    cout<<"\n 1 - square\n 2 - rectangle\n 3 - circle";
    cout<<"\n Enter your desired choice: ";
    cin>>op;

    switch(op)
    {
        case 1:
        cout<<"\n Enter a side: ";
        cin>>a;
        o.area(a);
        break;

        case 2:
        cout<<"\n Enter length: ";
        cin>>a;
        cout<<"\n Enter breadth: ";
        cin>>b;
        o.area(a, b);
        break;

        case 3:
        cout<<"\n Enter the radius: ";
        cin>>rad;
        o.area(rad);
        break;

        default:
        cout<<"\n Choose the option from the menu";
    }

    cout<<"\n\n";
    return 0;
}