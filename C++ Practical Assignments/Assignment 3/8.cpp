#include <iostream>
using namespace std;
int countElements(int arr[], int size) 
{
    return size;
}
int main() 
{
    int n;    
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    cout << "Number of elements in the array: " << countElements(arr, n) << endl;
    return 0;
}
