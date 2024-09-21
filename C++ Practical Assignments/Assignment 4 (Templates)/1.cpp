#include<iostream>
using namespace std;
template<class T>
T max()
{
	T size;
	cout<<"Enter the size : ";
	cin>>size;
	T arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the value : ";
		cin>>arr[i];
	}
	T max=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}

int main()
{
	int ans=max<int>();
	cout<<"Maximum : "<<ans<<endl;
	return 0;
}	