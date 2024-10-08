#include<iostream>
using namespace std;
class arm
{
    int n;
    int o;
    int rev;
    public:
    void strong()
    {
        cout<<"Enter Number U Want To Check Armstrong Or Not:";
        cin>>n;
        int digit;
        o=n;
        rev=0;
        while(n!=0)
        {

            digit=n%10;
            rev=(digit*digit*digit)+rev;
            n=n/10;
        }
        try
        {
            if(rev==o)
            {
                cout<<o<<" Is An Armstrong Number!";
            }
            else
            {
                throw o;
            }
        }
        catch(int a)
        {
            cout<<"Error:"<<a<<"Is Not An Armstrong Number!";
        }
    }
};
int main()
{
    class arm a;
    a.strong();
}