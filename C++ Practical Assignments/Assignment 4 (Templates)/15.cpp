#include <iostream>
using namespace std;
int main() 
{
    string s1;
    cout<<"Enter String 1 = ";
    cin>>s1;
    cout<<"The string is = "<<s1<<endl;
    s1.resize(10);
    cout<<"The string is after resize = "<<s1<<endl;
    return 0;
}