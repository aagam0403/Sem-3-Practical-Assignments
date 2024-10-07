#include <iostream>
using namespace std;
int main() 
{
    int a,b;
    cout<<"Enter the value of A = ";
    cin>>a;
    cout<<"Enter the value of B = ";
    cin>>b;
    try
    {
        if (b==0)
        {
            throw false;
        }
        else
        {
            int div=a/b;
            cout<<"Division is = "<<div;
        }
    }
    catch(bool x)
    {
        cout<<"B value is not 0";
    }
    return 0;
}