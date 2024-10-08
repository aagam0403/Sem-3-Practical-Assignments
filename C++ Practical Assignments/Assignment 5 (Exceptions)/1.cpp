#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of input : ";
    cin>>n;
    try
    {
        if(n==0)
        {
            throw 1;
        }
        else
        {
            
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of "<<i<<"th number : ";
        cin>>a[i];
    }
    int max=a[0],smax=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=max && smax<a[i])
        {
            smax=a[i];
        }
    }
    cout<<endl<<"Max : "<<max;
    cout<<endl<<"Second max : "<<smax;       
        }
    }
    catch(int b)
    {
        cout<<endl<<"Enter minimum 1 input number";
    }
    return 0;
}