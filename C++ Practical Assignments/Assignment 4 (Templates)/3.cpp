#include <iostream>
using namespace std;
template<class T>
class stud{
	public :
	void set(T size)
	{
		T arr[size];
		for(int i=0;i<size;i++)
		{
			cout<<"Enter the value :";
			cin>>arr[i];
		}
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
};

int main()
{
	stud<int> s;
	s.set(3);
}