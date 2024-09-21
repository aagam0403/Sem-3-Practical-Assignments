#include<iostream>
using namespace std;
void arr(int a[5])
{
	int max=0;
	for(int i=0;i<5;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	cout<<"Maximum : "<<max<<endl;
}
int main()
{
	int a[5];
	for(int i=0;i<5;i++)
	{
		cout<<"\nEnter the element : ";
		cin>>a[i];
	}
	arr(a);
	return 0;
}