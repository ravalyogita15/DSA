#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a < b) {
        cout << "Minimum number is: " << a;
    } else {
        cout << "Minimum number is: " << b;
    }

    return 0;
}
