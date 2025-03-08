#include<iostream>
using namespace std;
int main(){
	int sizeofarr;
	cout << "Enter Size Of Array : ";
	cin >> sizeofarr;
	int arr1[sizeofarr],arr2[sizeofarr],sumOfTwoArray[sizeofarr];
	
	for(int i=0;i<sizeofarr;i++){
	 	cout << "Enter the arr1[" << i << "] : ";
		cin >> arr1[i];
		cout << "Enter the arr2[" << i << "] : ";
		cin >> arr2[i];
		cout << endl;
	}

	cout << endl;
	
	 for(int i=0;i<sizeofarr;i++){
	 	sumOfTwoArray[i] = arr1[i] + arr2[i];
	 	 cout <<  sumOfTwoArray[i] << "  ";
	 }
	
	
	return 0;
}