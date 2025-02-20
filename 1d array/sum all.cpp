 // wap to find sum of all elemets of 1d array..

 #include<iostream>
using namespace std;
int main(){
	int arrinput,sum=0;
	cout << "Enter Size Of Array : ";
	cin >> arrinput;
	int arr[arrinput];
	
	for(int i=0;i<arrinput;i++)
	{
	 	cout << "Enter the arr[" << i << "] : ";
		cin >> arr[i];
	}

	cout << endl;
	
	 for(int i=0;i<arrinput;i++)
	 {
	 	sum += arr[i];
	 }
	 cout << sum;
	
	return 0;
}