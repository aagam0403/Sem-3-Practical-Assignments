// Write a C++ program to check whether the integer entered by user is positive, negative or
// zero using nested if-else. 
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"\n Enter a number: ";
    cin>>num;

    cout<<"\n ----------------------"<<endl;
    cout<<" The entered number = "<<num<<endl;
    cout<<"\n ----------------------"<<endl;


    if (num != 0)
    {
        if(num > 0)
        {
            cout<<"\n Positiver";
        }
        else if (num < 0)
        {
            cout<<"\n Negative";
        }
    }
    else 
    {
        cout<<"\n Zero";
    }
    cout<<"\n\n";
    return 0;
}