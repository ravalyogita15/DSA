#include<iostream>
using namespace std;
int main(){
	
	int sizeOfRow,sizeOfColumn;
	cout << "Enter Size of Row and Column : ";
	cin >> sizeOfRow >> sizeOfColumn;
	
	int arr[sizeOfRow][sizeOfColumn];
	int sum=0,num=1,k=2;
	for(int i=0;i<sizeOfRow;i++){
		for(int j=0;j<sizeOfColumn;j++){
			cout << "Enter arr[" << i << "][" << j <<  "]: ";
			cin >> arr[i][j];
		}
		cout << endl;
	}
	
	for(int i=0;i<sizeOfRow;i++){
		for(int j=0;j<sizeOfColumn;j++){
			cout << num << " ";
			num++;	
			if(i==0 || i==sizeOfRow-1 || j==0 || j==sizeOfColumn-1){
				sum += arr[i][j];
			}	
		}
		cout  << endl;
	}
	
	cout << sum;
	return 0;
}