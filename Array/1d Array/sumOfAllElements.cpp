#include<iostream>
using namespace std;
int main(){
	int sizeofarr,sum=0;
	cout << "Enter Size Of Array : ";
	cin >> sizeofarr;
	int arr[sizeofarr];
	
	for(int i=0;i<sizeofarr;i++){
	 	cout << "Enter the arr[" << i << "] : ";
		cin >> arr[i];
	}

	cout << endl;
	
	 for(int i=0;i<sizeofarr;i++){
	 	sum += arr[i];
	 }
	 cout << sum;
	
	return 0;
}