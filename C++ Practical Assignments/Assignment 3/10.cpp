#include <iostream>
using namespace std;
class Employee 
{
public:
    string name;
    int salary;
    void get() 
    {
        cout << "Enter Name & Salary: ";
        cin >> name >> salary;
    }
    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter details for Employee "<<i+1<<":"<<endl;
        e1[i].get();
        cout<<"Displaying details of Employee "<<i+1<<":"<< endl;
        e1[i].display();
        cout<<"--------------------------"<<endl;
    }
    return 0;
}