// wap to find min element from 2d array.
#include <iostream>

using namespace std;

int main() 
{
   
 	
    int m, n;

    cout << "Enter rows and columns (m n): ";
    cin >> m >> n;

    int arr[m][n];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int min = arr[0][0];

    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            if (arr[i][j] < min) 
			{
                min = arr[i][j];
            }
        }
    }

    cout << "The minimum value from the array is: " << min << endl;

}