// Write a C++ Program to create a class employee to print the detail of employees using
// objects.
#include<iostream>
#include <string>
using namespace std;

class Employee{
private:
    string name;
    int age;
    float salary;
public:
    Employee(string n, int a, float s):name(n), age(a), salary(s){};
    void Show()
    {
        cout<<"\n Name: "<<name;
        cout<<"\n Age: "<<age;
        cout<<"\n Salary: "<<salary<<endl;
    }
};

int main()
{
    string name;
    int age;
    float salary;
    cout<<"\n For employee 1: ";
    cout<<"\n Enter your name: ";
    cin>>name;
    cout<<"\n Enter your age: ";
    cin>>age;
    cout<<"\n Enter your salary: ";
    cin>>salary;
    Employee emp1(name , age, salary);
    emp1.Show();

    cout<<"\n For employee 2: ";
    cout<<"\n Enter your name: ";
    cin>>name;
    cout<<"\n Enter your age: ";
    cin>>age;
    cout<<"\n Enter your salary: ";
    cin>>salary;
    Employee emp2(name , age, salary);
    emp2.Show();

    cout<<"\n\n";
    return 0;

}