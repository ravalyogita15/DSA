#include<iostream>;
using namespace std;

int main (){
	int x,y,temp;
	cout << "Enter x : ";
	cin >> x;
	cout << "Enter y : ";
	cin >> y;
	
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	
	cout << "x = " << y << endl;
	cout << "y = " << y;
	
	
	return 0;
}