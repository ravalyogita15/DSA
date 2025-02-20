
//minimum find from the 1D array.#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) 
	{
		cout << "Enter the value of [" << i << "] :" ;
        cin >> arr[i];
    }

    int min = arr[0];

    for(int i = 1; i < n; i++) 
	{
        if (arr[i] < min) 
		{
            min = arr[i];
        }
    }

    cout << "The minimum value is: " << min << endl;

}