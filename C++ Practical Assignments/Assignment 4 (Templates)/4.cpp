#include<iostream>
using namespace std;
template<class T1,class T2>
void swap(T1 a,T2 b)
{
	cout<<"Before Swapping :"<<endl;
	cout<<"A : "<<a<<endl<<"B : "<<b<<endl;
	int t=0;
	t=a;
	a=b;
	b=t;
	cout<<"After Swapping : "<<endl;
	cout<<"A : "<<a<<endl<<"B : "<<b<<endl;
}

int main()
{
	swap(1,2);
}
