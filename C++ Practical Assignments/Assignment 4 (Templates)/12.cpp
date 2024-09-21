#include <iostream>
using namespace std;
int main() 
{
    string str1,str2;
    cout<<"Enter Name = ";
    cin>>str1;
    cout<<"You entered string 1 as = "<<str1<<endl;
    
    cout<<"Enter Surname = ";
    cin>>str2;
    cout<<"You entered string 2 as = "<<str2<<endl;
    
    str1.append(str2);
    cout<<"After Append string 1 as = "<<str1<<endl;
    return 0;
}