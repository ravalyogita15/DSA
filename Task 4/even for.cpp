#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enetr a number:";
	cin >> n;
	
	for(int i=n;i>=1;i--){
		
		if(i%2==0)
		{
			cout << i << " ";
		}
	}
	return 0;
}