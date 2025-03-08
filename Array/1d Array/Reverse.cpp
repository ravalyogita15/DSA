#include<iostream>
using namespace std;
int main(){
	int sizeofarr;
	cout << "Enter Size Of Array : ";
	cin >> sizeofarr;
	int arr[sizeofarr];
	
	for(int i=0;i<sizeofarr;i++){
	 	cout << "Enter the arr[" << i << "] : ";
		cin >> arr[i];
	}

	cout << endl;
	
	 for(int i=sizeofarr-1;i>=0;i--){
	 	cout << arr[i] << " ";
	 }
	 
	
	return 0;
}