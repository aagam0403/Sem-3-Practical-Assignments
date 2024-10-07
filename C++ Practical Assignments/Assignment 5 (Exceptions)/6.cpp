#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string email;
    cout << "Enter your email address: ";
    cin >> email;

    try
    {
        if (email.find('@') == string::npos)
        {
            throw false;
        }
        else
        {
            cout << "Email accepted : " << email << endl;
        }
    }
    catch (bool e)
    {
        cout <<"Email not acceptable"<< endl;
    }

    return 0;
}
