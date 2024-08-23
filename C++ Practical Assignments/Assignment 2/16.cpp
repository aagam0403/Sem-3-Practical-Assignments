// Write a C++ Program to find the sum of Numbers using Recursive Function
#include <iostream>
using namespace std;

int Recursive(int sum = 0)
{
    int num;
    cout<<"\n Enter a number to add(press -1 to quit): ";
    cin>>num;
    
    if(num == -1)
    {
        return sum;
    }
    else 
    {
        sum += num;
        return Recursive(sum);
    }
}

int main()
{
    int sum = Recursive();
    cout<<"\n Sum = "<<sum;
    cout<<"\n\n";
    return 0;
}