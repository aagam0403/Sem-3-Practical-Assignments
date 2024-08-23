// Design a class Student with private data members (name,Marks) and public member
// functions (setName, setMarks, getName, getMarks) to demonstrate Public and Private
// access specifiers.
#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    string name;
    int Marks;
    public:
    void setName(string n)
    {
        name = n;
    }
    void setMarks(int m)
    {
        Marks = m;
    }

    string getName()
    {
        return name;
    }
    int getMarks()
    {
        return Marks;
    }

};


int main()
{
    Student s1;
    string name;
    int marks;
    cout<<"\n Enter your name: ";
    cin>>name;
    cout<<"\n Enter your marks: ";
    cin>>marks;

    s1.setName(name);
    s1.setMarks(marks);

    cout<<"\n Name = "<<s1.getName();
    cout<<"\n Marks = "<<s1.getMarks();

    cout<<"\n\n";
    return 0;
}