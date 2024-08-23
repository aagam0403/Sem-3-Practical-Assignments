// Write a C++ program to check minimum and maximum of two numbers using Ternary
// operator
#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"\n Enter the 1st number: ";
    cin>>a;

    cout<<"\n Enter the 2nd number: ";
    cin>>b;

    cout<<"\n -----------------------"<<endl;
    cout<<"\n 1st number = "<<a<<endl;
    cout<<"\n 2nd number = "<<b<<endl;

    cout<<"\n -----------------------"<<endl;
    (a < b)?cout<<" 1st number is minimum\n 2nd number is maximum" : cout<<" 2nd number is minimum\n 1st number is maximum";

    cout<<"\n\n";
    return 0;
}