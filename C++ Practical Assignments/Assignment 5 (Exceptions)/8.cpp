#include<iostream>
using namespace std;
class multi
{
    int num;
    public:
    void multi_catch()
    {
        cout<<"Enter A Number:";
        cin>>num;
        try
        {
            if(num<0)
            {
                throw "Number Is Less Than 0";
            }
            else if(num==0)
            {
                throw 0;
            }
            else
            {
                cout<<"Number Is :"<<num;
            }
        }
        catch(int a)
        {
            cout<<"Error:Number Is "<<a;
        }
        catch(const char* c)
        {
            cout<<c;
        }
    }
};
int main()
{
    class multi m;
    m.multi_catch();
}
