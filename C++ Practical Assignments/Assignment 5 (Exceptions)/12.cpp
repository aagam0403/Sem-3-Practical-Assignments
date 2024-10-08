#include<iostream>
using namespace std;
class dupli
{
    int num;
    public:
    void licate()
    {
        cout<<"Enter Number Of Elements In Array:";
        int n;
        cin>>n;
        int num[n];
        int i;
        for(i=0;i<n;i++)
        {
            cout<<"Enter Element For Index["<<i<<"]";
            cin>>num[i];
        }
        int input;
        cout<<"Enter The Value For Element U want To Check Value For :";
        cin>>input;
        int count=0;
        try
        {
            for(i=0;i<n;i++)
            {
                if(num[i]==input)
                    {
                        count++;
                    }
            }
            throw count;
        }
        catch(int c)
        {
            if(c>0)
            {
                cout<<"Error:The Entered Elements Of Array Has Duplicated Value!";
            }
            else 
            {
                cout<<"Array Has not Duplicate Elements Value!";
                cout<<"Value For Elements Is:"<<endl;
                for(i=0;i<n;i++)
                {
                    cout<<"Value At Index["<<i<<"]="<<num[i];
                }
            }
        }
    }
};
int main()
{
    class dupli dup;
    dup.licate();
}