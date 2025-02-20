// Write a program in C++ to copy the elements of one array into another array.
 #include <iostream>
using namespace std;

int main() 
{
	
    
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr1[n], arr2[n];

    for (int i = 0; i < n; i++) 
	{
        cout << "Value of [" << i << "]: ";
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++) 
	{
        arr2[i] = arr1[i];
    }

    cout << "Cpoy Array: ";
    for (int i = 0; i < n; i++) 
	{
        cout << arr2[i] << " ";
    }
    cout << endl;

}