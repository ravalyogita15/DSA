#include<iostream>
using namespace std;
int main ()
 {
	float unit,electricity;
	cout << "Enter a eletricity unit : ";
	cin >> unit;
	
	if(unit>0 && unit<=100){
		electricity = unit * 0.5;
		cout << "Your electricity bill is : " << electricity;
	}
	else if(unit>=101 && unit<=200){
		electricity = unit * 1;
		cout << "Your electricity bill is : " << electricity;
	}	
	else if(unit>=201 && unit<=300){
		electricity = unit * 1.5;
		cout << "Your electricity bill is : " << electricity;
	}	
	else if(unit>=301){
		electricity = unit * 2;
		cout << "Your electricity bill is : " << electricity;
	}
	
 }