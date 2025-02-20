  // wap to get and print 1d array of n size.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	
	int sum=0,arr1[n];
	
	for(int i=1;i<=n;i++)
	{
		cout << "value of [" << i << "]:";
		cin >> arr1[i] ;
	}
	
	cout << "Final Array:";
	
	for(int i=1;i<=n;i++)
	{
	    cout << arr1[i] << " ";	
	}
}