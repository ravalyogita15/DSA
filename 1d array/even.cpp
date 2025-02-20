// wap to print only even number from array.


#include<iostream>
using namespace std;
int main(){
	int sizeofarr;
	cout << "Enter the value : ";
	cin >> sizeofarr;
	int arr[sizeofarr];
	
	for(int i=0;i<sizeofarr;i++){
	 	cout << "Enter the arr[" << i << "] : ";
		cin >> arr[i];
	}

	cout << endl;
	
	 for(int i=0;i<sizeofarr;i++){
	 	if(arr[i]%2==0){
	 		cout <<""<< arr[i] << "  ";
		 }
	 }
	 
	
	return 0;
}