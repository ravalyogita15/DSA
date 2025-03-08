#include<iostream>
using namespace std;
int main(){
	
	int sizeOfRow,sizeOfColumn;
	float sum = 0,average;
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
	
	for(int i=0;i<sizeOfRow;i++){
		for(int j=0;j<sizeOfColumn;j++){
				sum+=arr[i][j];	
		}
	}
		average = sum/(sizeOfRow * sizeOfColumn);
		cout << "Average is : " << average << endl;
	return 0;
}