#include <iostream>
using namespace std;
template<class T1,class T2>
class obj{
	public :
	string a;
	int b;
	obj(T1 a,T2 b){
		this->a=a;
		this->b=b;
	};
	void dis()
	{
		cout<<a<<"\n"<<b<<endl;
	}
};
int main()
{
	obj<string,int> a("abc",10);
	a.dis();
}
