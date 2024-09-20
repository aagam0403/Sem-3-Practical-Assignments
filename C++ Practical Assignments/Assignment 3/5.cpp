#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "The elements are: ";
    for(int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}
