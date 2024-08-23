// Create a class employee with name, salary, age as member, use get_data() and show()
// functions. Display details of 3 manager employees.
#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
    string name;
    float salary;
    int age;
public:
    void getData()
    {
        cout<<"\n Enter name: ";
        cin>>name;

        cout<<"\n Enter salary: ";
        cin>>salary;

        cout<<"\n Enter age: ";
        cin>>age;
    }

    void Show()
    {
        cout<<"\n Name: "<<name;
        cout<<"\n Age: "<<age;
        cout<<"\n Salary: "<<salary;
    }

    
}emp;

int main()
{
    for(int i = 0; i <= 3; i++)
    {
        emp.getData();
        emp.Show();
    }

    cout<<"\n\n";
    return 0;
}