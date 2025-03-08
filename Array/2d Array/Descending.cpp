#include <iostream>
using namespace std;

int main() {
    int sizeOfRow, sizeOfColumn;
    cout << "Enter Size of Row and Column: ";
    cin >> sizeOfRow >> sizeOfColumn;

    int arr[sizeOfRow][sizeOfColumn];

    for (int i = 0; i < sizeOfRow; i++) {
        for (int j = 0; j < sizeOfColumn; j++) {
            cout << "Enter arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < sizeOfRow; i++) {
        for (int j = 0; j < sizeOfColumn; j++) {
            for (int x = 0; x < sizeOfRow; x++) {
                for (int y = 0; y < sizeOfColumn; y++) {
                    if (arr[i][j] > arr[x][y]) {
                        int temp = arr[i][j];
                        arr[i][j] = arr[x][y];
                        arr[x][y] = temp;
                    }
                }
            }
        }
    }
    cout << "Descending Order" << endl;
    for (int i = 0; i < sizeOfRow; i++) {
        for (int j = 0; j < sizeOfColumn; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
