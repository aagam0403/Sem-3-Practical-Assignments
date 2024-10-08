#include<iostream>
using namespace std;

int main(){
    int f=0;
    string s;
    cout<<"Enter email : ";
    cin>>s;
    try
    {
        for (int i=0;i<s.length();i++)
        {
            if(s[i]=='@')
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            throw "valid email";
        }
        else
        {
            throw "invalid email";
        }
        
    }
    catch(const char* s)
    {
        cout<<s;
    }
     
    return 0;
}
