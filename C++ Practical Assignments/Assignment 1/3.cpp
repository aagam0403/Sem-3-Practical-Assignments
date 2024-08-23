// Write a C++ program using Switch statement example to generate days of the week.
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"\n Enter a number between 1 and 7 to know the day of the week: ";
    cin>>num;

    switch(num){
        case 2:
        cout<<"\n Monday"<<endl;
        break;

        case 3:
        cout<<"\n Tuesday"<<endl;
        break;

        case 4:
        cout<<"\n Wednesday"<<endl;
        break;

        case 5:
        cout<<"\n Thursday"<<endl;
        break;

        case 6:
        cout<<"\n Friday"<<endl;
        break;

        case 7:
        cout<<"\n Saturday"<<endl;
        break;

        case 1:
        cout<<"\n Sunday"<<endl;
        break;

        default:
        cout<<"\n number not between 1 and 7"<<endl;
    }
    cout<<"\n\n";
    return 0;
}