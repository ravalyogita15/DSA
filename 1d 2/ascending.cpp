  //set 1d array in ascending order
#include <iostream>

using namespace std;

int main() 
{
  
	
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) 
	{
		cout << "enter the value of [" << i << "]:";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) 
	{
        for (int j = i +1; j < n; j++) 
		{
            if (arr[i] > arr[j]) 
			{
                int x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }

    cout << "Ascending order: ";
    for (int i = 0; i < n; i++) 
	{
        cout << arr[i] << " ";
    }

}