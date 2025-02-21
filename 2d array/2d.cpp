  // wap to perform addition between two 2D array and store it into another 2D array.
  
  
  #include <iostream>
using namespace std;

int main() 
{	
    int m, n;

    cout << "Enter rows and columns (m n): ";
    cin >> m >> n;

    int arr1[m][n], arr2[m][n], arr3[m][n];

    cout << "Enter first array's element:" << endl;
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            cout << "arr1[" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
    }


    cout << "Enter second array's element:" << endl;
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            cout << "arr2[" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
    }


    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }


    cout << "Addition:" << endl;
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

}