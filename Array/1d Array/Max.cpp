#include<iostream>
using namespace std;
int main(){
	
	int sizeOfArr;
	cout << "Enter Size Of Array : ";
	cin >> sizeOfArr;
	
	int arr[sizeOfArr];
	int max = arr[0];
	for(int i=0;i<sizeOfArr;i++){
		cout << "Enter Value of arr[" << i << "]: ";
		cin >> arr[i];
	}
	cout << endl;
	for(int i=0;i<sizeOfArr;i++){
		if(arr[i] > max )
		{
			max=arr[i];
		}
	}
	cout << "Maximum Value is : " << max;
	return 0;
}