// Write a C++ program to use arithmetic operators like +,-,/, %.
#include<iostream>
using namespace std;

int main()
{
    char op;
    int a, b;
    cout<<"\n Enter the 1st number: ";
    cin>>a;

    cout<<"\n Enter 2nd number: ";
    cin>>b;

    cout<<"\n Enter the operation you want to perform(+,-,*,/, %): ";
    cin>>op;

    switch (op){
        case '+':
        cout<<"\n "<<a<<" + "<<b<<" is: "<<(a + b);
        break;

        case '-':
        cout<<"\n "<<a<<" - "<<b<<" is: "<<(a - b);
        break;

        case '*':
        cout<<"\n "<<a<<" * "<<b<<" is: "<<(a * b);
        break;

        case '/':
        cout<<"\n "<<a<<" / "<<b<<" is: "<<(a / b);
        break;

        case '%':
        cout<<"\n "<<a<<" % "<<b<<" is: "<<(a % b);
        break;

        default:
        cout<<"\n Enter proper operator";
    }

    cout<<"\n\n";
    return 0;
}