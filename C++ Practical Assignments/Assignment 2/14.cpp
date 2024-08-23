// Write a C++ Program to generate a simple calculator using constructor
#include <iostream>
using namespace std;

class Calculator{
private:
    double a , b;
    char op;

public:
    Calculator(double x, double y, double z):a(x), b(y), op(z){};

   double calculate()
   {
        switch(op)
        {
            case '+':
            return a+b;
            break;

            case '-':
            return a-b;
            break;

            case '*':
            return a*b;
            break;

            case '/':
            if(b != 0)
            {
                return a/b;
            }
            else 
                cout<<"\n Error, can't divide with 0";
            break;

            default:
            cout<<"\n ENter the correct operator";
        }
   } 
   double result = calculate();
        void Show(){
            if(op == '+' || op == '-' || op == '*' || op == '/')
            {
                cout<<"\n Result: "<<a<<" "<<op<<" "<<b<<" = "<<result;
            }
        }
};

int main()
{
    char op;
    double a, b;
    cout<<"\n Enter 1st number: ";
    cin>>a;

    cout<<"\n Enter 2nd number: ";
    cin>>b;

    cout<<"\n Enter ypur desired operation(+, -, *, /): ";
    cin>>op;

    Calculator calc(a, b, op);

    calc.Show();
    cout<<"\n\n";
    return 0;

}