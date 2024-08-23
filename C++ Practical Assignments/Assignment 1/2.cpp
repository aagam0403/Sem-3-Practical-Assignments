// Write a C++ program to swap the values of two integers
#include<iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout<<"\n Enter the 1st number: ";
    cin>>a;

    cout<<"\n Enter the 2nd number: ";
    cin>>b;

    cout<<"\n -------------------------";
    cout<<"\n 1st Number = "<<a;
    cout<<"\n 2nd Number = "<<b;
    cout<<"\n -------------------------";

    cout<<"\n After swapping:"<<endl;
    temp = a;
    a= b;
    b = temp;

    cout<<"\n 1st number: "<<a<<endl;
    cout<<"\n 2nd number: "<<b<<endl;
    cout<<"\n\n";
    return 0;
}