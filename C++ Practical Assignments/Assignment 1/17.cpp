// Write a C++ program to print all the prime between 1 to 100.
#include <iostream>
using namespace std;

int main()
{
    int count;
    cout<<"\n Prime numbers between 1 to 100 are: "<<endl;
    for(int i = 2; i<=100; i++)
    {
        count = 0;
        for(int j =1; j<=i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            cout<<"\n "<<i;
        }
    }
    
    cout<<"\n\n";
    return 0;
}