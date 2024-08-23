// Write a C++ Program to find the cube of a number using Inline Function
#include<iostream>
using namespace std;

inline int cube(int n)
{
    return n * n* n;
}

int main()
{
    int n;
    cout<<"\n Enter a number: ";
    cin>>n;
    cout<<"\n The cube of "<<n<<" = "<<cube(n);
    cout<<"\n\n";
    return 0;
}