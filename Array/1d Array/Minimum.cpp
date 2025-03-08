#include<iostream>
using namespace std;
int main(){
	
	int sizeOfArr;
	cout << "Enter Size Of Array : ";
	cin >> sizeOfArr;
	
	int arr[sizeOfArr];
	for(int i=0;i<sizeOfArr;i++){
		cout << "Enter Value of arr[" << i << "]: ";
		cin >> arr[i];
	}
	cout << endl;
	
	int min = arr[0];
	for(int i=0;i<sizeOfArr;i++){
		if(arr[i] < min )
		{
			min=arr[i];
		}
	}
	cout << "Minimum Value is : " << min;
	return 0;
}