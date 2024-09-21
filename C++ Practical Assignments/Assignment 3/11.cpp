#include <iostream>
using namespace std;
class Student 
{
public:
    int roll;
    string name;
    void get() 
    {
        cout << "Enter Roll Number and Name: ";
        cin >> roll;
        getline(cin, name);
    }
    void display() 
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() 
{
    Student students[10];

    for (int i = 0; i < 10; i++) 
    {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].get();
        cout << endl;
    }

    cout << "Displaying student details:" << endl;
    for (int i = 0; i < 10; i++) 
    {
        cout << "Details of student " << i + 1 << ":" << endl;
        students[i].display();
        cout << "-------------------------" << endl;
    }
    return 0;
}