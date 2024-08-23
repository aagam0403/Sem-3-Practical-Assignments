// write a c++ program to check prime number using Function
#include<iostream>
using namespace std;

class PrimeNumber{
public:
    void Prime(int n)
    {
        int count=0;
        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            cout<<"\n "<<n<<" is a prime number!";
        }
        else 
        {
            cout<<"\n "<<n<<" is not a prime number";
        }
    }
}Primenum;

int main()
{
    int n;
    cout<<"\n Enter a number: ";
    cin>>n;
    Primenum.Prime(n);
    cout<<"\n\n";
    return 0;
}