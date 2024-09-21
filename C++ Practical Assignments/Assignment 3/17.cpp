//string swapping
#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    char d[20];
    cout<<"Enter First String = "<<endl;
    getline (cin,s1);

    cout<<"Enter Second String = "<<endl;
    getline (cin,s2);

    cout<<"\nBefore Swap string is = "<<endl;
    cout<<"\nFirst string is = "<<s1;
    cout<<"\nSecond string is = "<<s2;
    
    s1.swap(s2);

    cout<<"\nAfter Swap string is = "<<endl;
    cout<<"\nFirst string is = "<<s1;
    cout<<"\nSecond string is = "<<s2;   
}