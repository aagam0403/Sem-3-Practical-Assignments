#include <iostream>
using namespace std;
template<class T>
class obj{
	public :
	string s;
	int n;
	obj(string a,int b)
	{
		s=a;
		n=b;
	}
	void dis(){
		cout<<"Name : "<<s<<endl;
		cout<<"Roll No : "<<n<<endl;
	}
	void ob(obj <T>& obj)
	{
		obj.dis();
	}
};

int main()
{
	obj<int> a("abc",10);
	a.ob(a);
}