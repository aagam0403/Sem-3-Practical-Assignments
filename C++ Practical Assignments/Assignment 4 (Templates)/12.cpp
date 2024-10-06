#include <iostream>
using namespace std;
template<class T1,class T2>
class comp{
	public :
	T2 cint;
	void inte(T1 p,T2 i,T1 n)
	{
		cint=((p*i*n)/100);
		cout<<"Compound Interest : "<<cint<<endl;
	}
};
int main()
{
	comp<int,float> s;
	s.inte(10000,10,1);
}