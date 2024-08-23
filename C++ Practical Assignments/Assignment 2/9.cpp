// Write a C++ program to swap numbers using friend function.
#include<iostream>
using namespace std;

class Swap{
private:
    int a, b;
public:
    void getData()
    {
        cout<<"\n Enter 1st number: ";
        cin>>a;
        cout<<"\n Enter 2nd number: ";
        cin>>b;
    }
    void Show()
    {
        cout<<"\n ---------------------"<<endl;
        cout<<"\n Before swapping: "<<endl;
        cout<<" 1st number = "<<a<<endl;
        cout<<" 2nd number = "<<b<<endl;
    }
    friend void swap(Swap &s);
}s;

void swap(Swap &s)
{
    int temp = 0;
    temp = s.a;
    s.a = s.b;
    s.b = temp;
    cout<<"\n -------------------------";
    cout<<"\n After swapping: ";
    cout<<"\n 1st number = "<<s.a;
    cout<<"\n 2nd number = "<<s.b;
}

int main()
{
    s.getData();
    s.Show();
    swap(s);
    cout<<"\n\n";
    return 0;
}