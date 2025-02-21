// wap to find average of all element of 2D array.


#include <iostream>
using namespace std;

int main() 
{
	
	
    int m, n;
    float sum = 0,average;

    cout << "Enter rows and columns (m n): ";
    cin >> m >> n;

    int arr[m][n];

    for (int i = 0; i < m; i++)
	{
        for (int j = 0; j < n; j++) 
		{
            cout << "Enter arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
            sum = sum + arr[i][j];
        }
    }

    average = sum / (m * n);
    cout << "The average is: " << average << endl;
}