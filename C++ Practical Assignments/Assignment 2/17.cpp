// Write a c++ Program to swap two numbers using Function.
#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"\n 1st number = "<<a;
    cout<<"\n 2nd number = "<<b;
}

int main()
{
    int a, b;
    cout<<"\n Enter 1st number: ";
    cin>>a;
    cout<<"\n Enter 2nd number: ";
    cin>>b;
    cout<<"\n Before swapping --------------"<<endl;
    cout<<"\n 1st number = "<<a;
    cout<<"\n 2nd number = "<<b<<endl;

    cout<<"\n After swapping --------------"<<endl;
    swap(a, b);
    cout<<"\n\n";
    return 0;
}