// Write aa c++ program to print Fibonacci series up to a user inputted numbers using
// recursive function.
#include<iostream>
using namespace std;

class Recursive{
public:
    int Fibonacci(int n)
    {
        if(n <= 0)
        {
            return 1;
        }
        else
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}Rec;

int main()
{
    int n;
    cout<<"\n Enter a number: ";
    cin>>n;
    cout<<endl;
    for(int i = 1; i <= n; i++)
    {
        cout<<" "<<Rec.Fibonacci(i)<<" ";
    }

    cout<<"\n\n";
    return 0;
}