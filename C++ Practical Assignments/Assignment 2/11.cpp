// Write a Program with function to Check Whether a Number Is a Palindrome or Not
#include<iostream>
using namespace std;

class Palindrome{
public:
    void palindrome(int n)
    {
        int rem = 0; 
        int rev = 0;
        int num = n;
        while(n > 0)
        {
            rem = n%10;
            rev = rev * 10+rem;
            n = n/10;
        }
        if(num == rev)
        {
            cout<<"\n "<<num<<" is a palindrome number";
        }
        else
        {
            cout<<"\n "<<num<<" is not a palindrome number";
        }
    }
};

int main()
{
    Palindrome p;
    int n;
    cout<<"\n Enter a number: ";
    cin>>n;
    p.palindrome(n);
    cout<<"\n\n";
    return 0;
}