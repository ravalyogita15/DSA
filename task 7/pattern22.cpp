//A
//B C
//D E F
//G H I J
//K L M N O


#include <iostream>

using namespace std;

int main() 
{
    char Alfabet = 'A'; 
    for (int i = 1; i <= 5; i++) 
	{  
        for (int j = 1; j <= i; j++) 
		{  
            cout << Alfabet << " ";  
            Alfabet++;  
        }
        cout << endl;
    }
    return 0;
}