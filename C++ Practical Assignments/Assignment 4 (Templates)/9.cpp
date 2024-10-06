#include <iostream>
using namespace std;
template<class T>
void rev(T a)
{
	T temp=a;
	T rem,div;
	while(a!=0)
	{
		rem=a%10;
		cout<<rem;
		a/=10;
	}
	cout<<"\n";
}
int main(){
	rev(104);
}