// Write a C++ program to find the area of a circle.
#include<iostream>
using namespace std;

int main()
{
    float radius, area;
    cout<<"\n Enter the radius of the circle: ";
    cin>>radius;

    area = 3.14*radius*radius;
    cout<<"\n The area of the circle with radius "<<radius<<" is: "<<area;
    cout<<"\n\n";
    return 0;
}