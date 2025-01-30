#include <iostream>
using namespace std;

int main(){
	
	float percentage;
	cout <<"Enetr The Percentage of The Student: ";
	cin >> percentage;
	
	if(percentage>=90)
	{
		cout << "student Grade: A+" << endl;
	}
	else if(percentage>=80)
	{
		cout << "student Grade: A"  << endl;
	}
    else if(percentage>=70)
	{
		cout << "student Grade: B" << endl;
	}
	else if(percentage>=60)
	{
		cout << "student Grade: C" << endl;
	}
	else if(percentage>=50 || percentage>=40)
	{
		cout << "student Grade: D" << endl;
	}
	
	else 
	{
		cout << "Fail in Exam " << endl;
	}
}