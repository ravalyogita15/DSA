#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    if (a > b) {
        if (a > c) {
            if (a > d) {
                cout << "Maximum number is: " << a;
            } else {
                cout << "Maximum number is: " << d;
            }
        } else {
            if (c > d) {
                cout << "Maximum number is: " << c;
            } else {
                cout << "Maximum number is: " << d;
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                cout << "Maximum number is: " << b;
            } else {
                cout << "Maximum number is: " << d;
            }
        } else {
            if (c > d) {
                cout << "Maximum number is: " << c;
            } else {
                cout << "Maximum number is: " << d;
            }
        }
    }

    return 0;
}
