//1 0 1 0 1
//  1 0 1 0
//    1 0 1
//      1 0
//        1
#include<iostream>
using namespace std;
int main(){
	
	for(int i=5;i>=1;i--)
	{
	
		for(int j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				cout << "0 ";
			}
			else
			{
				cout << "1 ";
			}
		}
			cout << endl;
		for(int k=5-i;k>=0;k--)
		{
			cout << "  ";
		}
	}
	return 0;
}