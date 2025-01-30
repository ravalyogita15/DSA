#include <iostream>
using namespace std; 

int main(){
	
	int number;
	
	cout <<"Enetr your Number" << endl;
	cin >> number;
	
	if(number > 0)
	{
	cout <<	"The Number is Positive";  
	}
	else if(number < 0)
	{
		cout << "The Number Negative" ; 
	}
	else{
		cout << "The Number Is Nautral"; 
	}
	
}

