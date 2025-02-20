#include<iostream>
using namespace std;
int main()
{
	
	
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	
	float sum=0,average;
	int arr[n];
	
	for(int i=1;i<=n;i++)
	{
		cout << "value of [" << i << "]:";
		cin >> arr[i] ;
	}
	
	for(int i=1;i<=n;i++)
	{	
	    sum=sum+i;
	}
	
	average = sum/n;
	cout << average;
}