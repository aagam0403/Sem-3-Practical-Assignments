#include <iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"Enter the no. of rows & cols : ";
    cin>>i>>j;
    int a[i][j];
    for(int x=0;x<i;x++)
    {
        for(int y=0;y<j;y++)
        {
            cout<<"Enter the element ["<<x<<"]["<<y<<"]";
            cin>>a[x][y];   
        }
    }
    for(int x=0;x<i;x++)
    {
        for(int y=0;y<j;y++)
        {
            cout<<"\t"<<a[x][y];   
        }
        cout<<"\n";
    }
    return 0;
}