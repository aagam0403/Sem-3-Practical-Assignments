// Write a c++ Program to demonstrate the use of Friend class to access the member of one
// class
#include<iostream>
using namespace std;

class ClassB;

class ClassA{
private: 
    int a;

public: 
    void SetA(int x)
    {
        a = x;
    }

    friend class ClassB;
}A;

class ClassB{
public:
    void ShowA(ClassA &A)
    {
        cout<<"\n The value of a = "<<A.a;
    }
}B;

int main()
{
    int x;
    cout<<"\n Enter a number to be set: ";
    cin>>x;
    A.SetA(x);
    B.ShowA(A);

    cout<<"\n\n";
    return 0;
}