//* * * * *
//  * * * *
//    * * *
//      * *
//        *
//


#include<iostream>
using namespace std;
int main(){
	
	for(int i=1;i<=5;i++)
	{
	
		for(int j=i;j<=5;j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
		for(int k=1;k<=i;k++)
		{
		cout << "  ";
		}
	}
	
	return 0;
}