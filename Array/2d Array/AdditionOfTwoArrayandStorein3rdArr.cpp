#include<iostream>
using namespace std;
int main(){
	
	int sizeOfRow,sizeOfColumn;
	cout << "Enter Size of Row and Column : ";
	cin >> sizeOfRow >> sizeOfColumn;
	
	int arr1[sizeOfRow][sizeOfColumn],arr2[sizeOfRow][sizeOfColumn],arr3[sizeOfRow][sizeOfColumn];
	
	for(int i=0;i<sizeOfRow;i++){
		for(int j=0;j<sizeOfColumn;j++){
			cout << "Enter arr1[" << i << "][" << j <<  "]: ";
			cin >> arr1[i][j];
			cout << "Enter arr2[" << i << "][" << j <<  "]: ";
			cin >> arr2[i][j] ;
			cout << endl;
		}
		cout << endl;
	}
	
	for(int i=0;i<sizeOfRow;i++){
		for(int j=0;j<sizeOfColumn;j++){
				arr3[i][j]=arr1[i][j] + arr2[i][j];	
				cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
		
	return 0;
}