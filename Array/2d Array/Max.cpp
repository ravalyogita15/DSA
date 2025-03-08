#include<iostream>
using namespace std;
int main(){
	
	int sizeOfRow,sizeOfColumn;
	cout << "Enter Size of Row and Column : ";
	cin >> sizeOfRow >> sizeOfColumn;
	
	int arr[sizeOfRow][sizeOfColumn];
	
	for(int i=0;i<sizeOfRow;i++){
		for(int j=0;j<sizeOfColumn;j++){
			cout << "Enter arr[" << i << "][" << j <<  "]: ";
			cin >> arr[i][j];
		}
		cout << endl;
	}
	
	int max = arr[0][0];
	for(int i=0;i<sizeOfRow;i++){
		for(int j=0;j<sizeOfColumn;j++){
			
			if(arr[i][j] > max){
				max=arr[i][j];
			}			
		}
	}
		cout << "Maximum Value is : " << max << endl;
	return 0;
}