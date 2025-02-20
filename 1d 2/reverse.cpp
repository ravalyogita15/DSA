// Write a program in C to read n number of values in an array and display them in reverse order.
#include<iostream>
using namespace std;
int main()
{

	int n;
	cout << "Enter size of array: ";
	cin >> n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cout << "value of [" << i << "]:";
		cin >> arr[i] ;
	}
	for(int i=n-1; i>=0; i--)
	{
		cout << arr[i] << " ";
	}
	cout <<endl;
}