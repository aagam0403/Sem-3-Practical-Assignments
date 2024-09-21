#include <iostream>
using namespace std;
void arr(int a[5])
{
    int min=a[0];
    for (int i=5;i>0;i--)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<"Minimum : "<<min<<endl;
}
int main() 
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter the element of a["<<i<<"]";
        cin>>a[i];
    }
    arr(a);
    return 0;
}