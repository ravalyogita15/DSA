#include<iostream>
using namespace std;
int main(){
	int sizeofarr;
	float sum = 0;
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
	 
	 float average = sum/sizeofarr;
	 cout << "Average is : " << average;
	 
	
	return 0;
}