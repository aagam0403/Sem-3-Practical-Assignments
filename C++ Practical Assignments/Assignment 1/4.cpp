// Write a C++ Program to enter salary and output income tax and net salary.
#include <iostream>
using namespace std;

int main()
{
    double salary, incometax;
    cout<<"\n Enter your salary: ";
    cin>>salary;

    if(salary < 300000)
    {
        incometax = 0;
    }
    else if(salary > 300000 && salary < 600000)
    {
        incometax = 0.05*salary;
    }
    else if(salary > 600000 && salary  < 120000)
    {
        incometax = 0.15*salary;
    }
    else if(salary > 1200000 && salary < 1500000)
    {
        incometax = 0.2 * salary;
    }
    else if(salary > 1500000)
    {
        incometax = 0.3* salary;
    }
    else 
    {
        cout<<"\n Error couldn't calculate your income tax";
    }

    cout<<"\n Your total salary is= "<<(salary - incometax);
    cout<<"\n\n";
    return 0;
}