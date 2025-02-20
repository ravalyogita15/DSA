    // wap to perform addition of two 1d array and store it into anothe 1d array.
    
    #include<iostream>

using namespace std;

int main()
{
  
    int n;
    cout << "Enter the value of n: ";
    cin  >> n;
    
    int arr1[n], arr2[n], sum[n];

    cout << "First Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for arr1[" << i << "]: "; 
        cin >> arr1[i];      
    }
    cout << endl;
    

    cout << "Second Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for arr2[" << i << "]: "; 
        cin >> arr2[i];      
    } 
    cout << endl;
    
    
    for (int i = 0; i < n; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }


    cout << "Sum of Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "sum[" << i << "] = " << sum[i] << endl;
    }

    return 0;
}