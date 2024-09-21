//string copy
#include<iostream>
using namespace std;
int main()
{
    string s1;
    char d[20];

    cout<<"Enter String = ";
    getline (cin,s1);

    cout<<"\n copy string..."<<endl;
    s1.copy(d,5);

    cout<<"Copied String is = "<<d<<endl;    
}