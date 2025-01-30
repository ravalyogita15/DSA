#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter your age " << endl;
	cin>> age;
	if(age==0 ) 
	{
		cout<<"enter your valid age"<< endl ;
	}
		else if (age>=100  )
	{
		cout<<"enter your age within 100 " << endl;
	}
	else if(age>=18)
	{
		cout<<"You are eligible to vote!" << endl;
	}
	else{
		cout <<"You are not eligible to vote!";
	}
}