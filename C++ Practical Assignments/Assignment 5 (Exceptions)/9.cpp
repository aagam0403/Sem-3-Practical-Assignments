#include <iostream>
using namespace std;

int main() 
{

	int age;
	cout<<"\n enter the value of age ";
	cin>>age;
	
	try
	{
		if(age<18)
		{
			throw 1;
		}
		else
		{
		cout<<"\n eligible for voting ... "<<age;
		}
	}
	catch(int x)
	{
		cout<<"\n error:not eligible for voting..";
	}
	cout<<"\n";
	return 0;
}
