#include <iostream>
using namespace std;
int main()
{
    int j;
    cout<<"Enter the no. of elements : ";
    cin>>j;
    int a[j];
    for(int i=0;i<j;i++)
    {
        int j;
        cout<<"Enter the element of a["<<i<<"]";
        cin>>a[i];
    }
    for(int i=0;i<j;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}