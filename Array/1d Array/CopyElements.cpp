#include<iostream>
using namespace std;
int main(){
	int sizeofarr;
	cout << "Enter Size Of Array : ";
	cin >> sizeofarr;
	int arr1[sizeofarr],arr2[sizeofarr];
	
	for(int i=0;i<sizeofarr;i++){
	 	cout << "Enter the arr[" << i << "] : ";
		cin >> arr1[i];
	}

	cout << endl;
	
	for(int i=0;i<sizeofarr;i++){
	 	 arr2[i] = arr1[i];
	 }
	 
	 cout << "Arr1  Arr2" << endl;
	for(int i=0;i<sizeofarr;i++){
	 	cout << arr1[i] << "     " << arr2[i] << endl;
	 }
	
	return 0;
}