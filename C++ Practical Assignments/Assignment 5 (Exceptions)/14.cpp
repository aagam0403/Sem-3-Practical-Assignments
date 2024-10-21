#include<iostream>
using namespace std;
template<typename X , typename U , typename V>
class STUDENT
{
    X x;
    U y;
    V z;
    public:
    void read()
    {
        cout<<"Enter Roll No:";
        cin>>x;
        cin.ignore();
        cout<<"Enter Name:";
        getline(cin,y);
        cout<<"Enter Marks:";
        cin>>z;
    }
    void print()
    {
        cout<<"STUDENT DETAILS:";
        cout<<"Roll No:"<<x<<endl;
        cout<<"Name:"<<y<<endl;
        cout<<"Marks:"<<z<<endl;
        
    }
};
int main()
{
    class STUDENT<int,string,float> s;
    s.read();
    s.print();
}