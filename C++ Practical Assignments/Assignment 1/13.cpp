// Write a C++ Program to create a menu driven program for to perform the following
// operations
// 1. Sum of Digit
// 2. Armstrong or Not
// 3. Palindrome or Not
// 4. Multiplication of Digit
#include<iostream>
using namespace std;

int main()
{
    int op, n, num, a, b, rem = 0, rev = 0, sum = 0;
    cout<<"\n 1. Sum of Digit\n 2. Armstrong or Not\n 3. Palindrome or Not\n 4. Multiplication of Digit"<<endl;
    cout<<"\n Enter your desired operation: ";
    cin>>op; 
    switch (op)
    {
        case 1:
        cout<<"\n Enter 1st number: ";
        cin>>a;
        cout<<"\n Enter 2nd number: ";
        cin>>b;
        cout<<"\n "<<a<<" + "<<b<<" = "<<(a+b);
        break;

        case 2:
        cout<<"\n Enter a number: ";
        cin>>num;
        n = num;
        while (num > 0)
        {
            rem  = num %10;
            sum = sum + (rem*rem*rem);
            num= num/10;
        }
        if (n==sum)
        {
            cout<<"\n "<<n<<" is Armstrong"<<endl;
        }
        else
        {
            cout<<"\n "<<n<<" is not Armstrong"<<endl;
        }
        break;

        case 3:
        cout<<"\n Enter a number: ";
        cin>>num;
        n = num;
        while(num > 0)
        {
            rem = num %10;
            rev = rev * 10 +rem;
            num = num/10;
        }
        if(n == rev)
        {
            cout<<"\n "<<n<<" is Palindrome";
        }
        else
        {
            cout<<"\n "<<n<<" is not Palindrome";
        }
        break;

        case 4:
        cout<<"\n Enter 1st number: ";
        cin>>a;
        cout<<"\n Enter 2nd number: ";
        cin>>b;
        cout<<"\n "<<a<<" * "<<b<<" = "<<(a*b);
        break;

        default:
        cout<<"\n Enter proper number from the menu!";
    }

    cout<<"\n\n";
    return 0;
}