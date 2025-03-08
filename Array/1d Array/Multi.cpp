#include<iostream>
using namespace std;
int main(){
	int sizeofarr;
	cout << "Enter Size Of Array : ";
	cin >> sizeofarr;
	int table[sizeofarr];
	
	for(int i=0;i<sizeofarr;i++){
	 	cout << "Enter the arr[" << i << "] : ";
		cin >> table[i];
	}

	cout << endl;
	
	 for(int i=0;i<sizeofarr;i++){
	 	for(int j=1;j<=10;j++){
	 		cout << table[i] <<  " * " << j << " = " << table[i]*j << endl;
		 }
		 cout << endl;
	 }
	 
	
	return 0;
}