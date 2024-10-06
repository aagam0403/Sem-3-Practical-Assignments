#include <iostream>
using namespace std;
template<class T>
void ar(T a)
{
	cout<<"Area of square : "<<(a*a)<<endl;
}
template<class T1,class T2>
void ar(T1 a,T2 b)
{
	cout<<"Area of Rectangle : "<<(a*b)<<endl;
}
int main()
{
	ar(5);
	ar(3,7);
}