#include <iostream>
using namespace std;

int main(){
	
	for(int i = 2000; i <= 3000; i += 4)
	{
		
		if(i % 100 != 0 || i % 400 == 0)
	  {
		cout << i << " ";
      }
	
	}
	
	return 0;
}
 
 
