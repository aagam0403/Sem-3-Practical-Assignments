// write a c+ program to calculate factorial numbers using Recursion
#include<iostream>
using namespace std;

class Recursion{
    public:
    int factorial(int n)
    {
        if(n <= 0)
        {
            return 1;
        }
        else 
        return n*factorial(n-1);
    }
};

int main()
{
    int n, fact;
    cout<<"\n Enter a number: ";
    cin>>n;
    Recursion Rec;

    fact = Rec.factorial(n);
    cout<<"\n The factorial of "<<n<<" is: "<<fact;
    cout<<"\n\n";
    return 0;
}