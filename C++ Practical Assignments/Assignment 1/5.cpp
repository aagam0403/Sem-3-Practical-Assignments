// Write a C++ Program to convert days into years and weeks
#include<iostream>
using namespace std;

int main()
{
    int days, weeks, years, remainingDays;
    cout<<"\n Enter the number of days: ";
    cin>>days;

    years = days / 365;
    remainingDays = days % 365;
    weeks = remainingDays / 7;
    remainingDays = remainingDays % 7;

    cout<<"\n "<<days<<" days is approximately "<<years<<" years, "<<weeks<<" weeks, and "<<remainingDays<<" days";
    cout<<"\n\n";
    return 0;
}