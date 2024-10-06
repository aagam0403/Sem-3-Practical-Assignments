#include <iostream>
using namespace std;
template<class T1,class T2,class T3>
void dis(T1 a,T2 b,T3 c)
{
	if(a>b)
	{
		cout<<a<<"t"<<c<<endl;
	}
	else
	{
		cout<<b<<"\t"<<c<<endl;	
	}
}

int main()
{
	dis(10,10.1,'a');
}