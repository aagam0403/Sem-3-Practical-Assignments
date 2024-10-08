#include<iostream>
using namespace std;
class vow
{
    string str;
    int i;
    public:
    void wel()
    {
        cout<<"Enter String:";
        cin>>str;
        int count=0;
        try
        {
            for(i=0;i<str.length();i++)
            {
                if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O' || str[i]=='U')
                {
                    count ++;
                
                }
                
            }
            throw count;
        }
        catch(int c)
        {
            if(c<=0)
            {
                cout<<"Error:Vowels Not Found In String!";
            }
            else
            {
                cout<<"String Is:"<<str;
            }
        }
        
    }
};
int main()
{
    class vow vo;
    vo.wel();
}
