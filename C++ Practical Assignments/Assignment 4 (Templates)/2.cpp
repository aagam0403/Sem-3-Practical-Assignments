#include<iostream>
using namespace std;
template<class T>
T add(T a,T b)
{
	return (a+b);
}

int main()
{
	cout<<"Addition : "<<add(7,5);
}