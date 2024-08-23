// Write a C++ program that will ask user to input two numbers and check whether values are
// equal or not using assignment operator
#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"\n Enter 1st number: ";
    cin>>a;

    cout<<"\n Enter 2nd number: ";
    cin>>b;

    cout<<"\n -------------------------"<<endl;
    cout<<"\n 1st number = "<<a<<endl;
    cout<<"\n 2nd number = "<<b<<endl;
    cout<<"\n -------------------------"<<endl;

    if(a == b)
    {
        cout<<"\n Both the numbers are equal.";
    }
    else
    {
        cout<<"\n Both numbers are not equal";
    }
    cout<<"\n\n";
    return 0;
}