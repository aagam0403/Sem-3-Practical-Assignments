#include <iostream>
using namespace std;
template<class T1,class T2,class T3,class T4>
class stud{
	public :
	stud(T1 a,T2 b,T3 c,T4 d)
	{
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
		cout<<d<<endl;
	}
};

int main()
{
	stud <int,float,char,string> s(7,8.8,'k',"CR7");
}