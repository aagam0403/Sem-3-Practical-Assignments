// Write a C++ Program to print multiplication table.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\n Enter any number: ";
    cin>>n;
    for(int i = 1; i <= 10; i++)
    {
        cout<<"\n "<<n<<" x "<<i<<" = "<<(n*i);
    }
    cout<<"\n\n";
    return 0;
}