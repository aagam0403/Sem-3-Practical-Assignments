#include<iostream>
using namespace std;
template <class T1,class T2>
void dis(T1 a, T2 b)
{
    if(a>b)
	{
		cout<<a<<"t"<<endl;
	}
	else
	{
		cout<<b<<"\t"<<endl;	
	}
}
int main()
{
	dis(10,10.1);
}
