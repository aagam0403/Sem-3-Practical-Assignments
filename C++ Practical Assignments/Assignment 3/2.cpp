#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter Rows = ";
    cin>>r;
    cout<<"Enter Column = ";
    cin>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter the Value of an array ["<<i<<"]["<<j<<"]";
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
