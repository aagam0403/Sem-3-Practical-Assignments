// write a c++ program that declares and calls the function to perform various mathematical
// functions(Add, Subtract, Multiply, divide)
#include<iostream>
using namespace std;

class Arithmetic{
public:
    int Sum(int a, int b)
    {
        return a+b;
    }

    int Sub(int a, int b)
    {
        return a-b;
    }

    int Mul(int a, int b)
    {
        return a*b;
    }

    int Div(int a, int b)
    {
        return a/b;
    }
};

int main()
{
    int a, b;
    char op;
    cout<<"\n Enter the 1st number: ";
    cin>>a;
    cout<<"\n Enter the 2nd number: ";
    cin>>b;

    cout<<"\n Enter your desired operation(+, -, /, *): ";
    cin>>op;

    Arithmetic Arith;
    switch (op){
        case '+':
        cout<<"\n "<<a<<" + "<<b<<" = "<<Arith.Sum(a, b);
        break;

        case '-':
        cout<<"\n "<<a<<" - "<<b<<" = "<<Arith.Sub(a, b);
        break;

        case '*':
        cout<<"\n "<<a<<" * "<<b<<" = "<<Arith.Mul(a, b);
        break;

        case '/':
        cout<<"\n "<<a<<" / "<<b<<" = "<<Arith.Div(a, b);
        break;

        default:
        cout<<"\n Enter proper operator!";
    }
    cout<<"\n\n";
    return 0;
}