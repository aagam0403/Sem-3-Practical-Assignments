#include <iostream>
using namespace std;
int main() 
{
    int a;
    cout<<"Enter the value of A = ";
    cin>>a;
    try
    {
        if (a>=0 && a<100)
        {
            cout<<"Number is in limit";
        }
        else
        {
            throw false;
        }
    }
    catch(bool x)
    {
        cout<<"Number is not greater than 100 and less than 0";
    }
    return 0;
}