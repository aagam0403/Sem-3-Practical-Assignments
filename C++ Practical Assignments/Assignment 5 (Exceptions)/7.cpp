#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int accno,balance,withdraw;
    cout << "Enter your Account no. : ";
    cin >> accno;
    cout << "Enter your Balance : ";
    cin >> balance;
    cout << "Enter your withrawal amount";
    cin >> withdraw;
    try
    {
        if (balance>withdraw)
        {
            throw false;
        }
        else
        {
            cout << "Your withraw amount is less than your balance"<<endl;
        }
    }
    catch (bool e)
    {
        cout <<"Withrawal accepted"<< endl;
    }

    return 0;
}
