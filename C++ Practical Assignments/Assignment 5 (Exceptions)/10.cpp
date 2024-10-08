#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the element : ";
        cin>>a[i+1];
    } 
    int s;
    cout<<"Enter the position of element which u want to search : ";
    cin>>s;
    try
    {
        if(s>n)
        {
            throw 1;
        }
        else
        {
        cout<<"\n Search element = "<<a[s];   
        }
    }
    catch(int e)
    {
        cout<<"Exception : Array out of bound";
    }
    return 0;
}