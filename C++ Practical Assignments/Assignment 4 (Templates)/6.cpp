#include <iostream>
using namespace std;
template<class T>
class stud{
	public :
	void op(T a,T b)
	{
		cout<<"Addition :"<<(a+b)<<endl;
		cout<<"Subtaction :"<<(a-b)<<endl;
		cout<<"Multiplication :"<<(a*b)<<endl;
		cout<<"Division :"<<(a/b)<<endl;
	}
};
int main()
{
	stud<int> obj;
	obj.op(10,5);
}