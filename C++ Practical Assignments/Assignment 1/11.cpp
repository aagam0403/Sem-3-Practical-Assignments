// Write a C++ program to calculate the sum of 6 subject and find the percentage. 
#include<iostream>
using namespace std;

int main()
{
    float maths, english, physics, chemistry, computer, biology, total, percentage;
    cout<<"\n Enter your marks out of 100 for: "<<endl;

    cout<<"\n Maths: ";
    cin>>maths;

    cout<<"\n English: ";
    cin>>english;

    cout<<"\n Physics: ";
    cin>>physics;

    cout<<"\n Chemistry: ";
    cin>>chemistry;

    cout<<"\n Biology: ";
    cin>>biology;

    cout<<"\n Computer: ";
    cin>>computer;

    cout<<"\n -------------------------------------"<<endl;
    total = maths + english + physics + biology + chemistry + computer;
    cout<<" Your total marks are= "<<total<<endl;
    cout<<"\n -------------------------------------"<<endl;

    percentage = total / 6;
    cout<<" Your percentage is = "<<"%"<<percentage;

    cout<<"\n\n";
    return 0;
}