//Write a C++ to create a class Subject to print the detail of Subject Code, Subject Name using
//objects.
#include<iostream>
using namespace std;
class sub
{
    public :
    string subname;
    int subcode;
    void getdata()
    {
        cout<<"Enter Subject Name = ";
        cin>>subname;
        cout<<"Enter Subject Code= ";
        cin>>subcode;
    }
    void showdata()
    {
        cout<<"-----------------------------";
        cout<<"Subject Name = "<<subname<<endl;
        cout<<"Subject Code = "<<subcode<<endl;
    }
};
int main()
{
    sub s1;
    s1.getdata();
    s1.showdata();
    return 0;
}
