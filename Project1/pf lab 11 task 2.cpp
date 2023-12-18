#include <iostream>
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void col_sum(int arr[][MAX_COLS], int numRows, int numCols) {
   if (numCols % 2 == 0) {
        cout << "Cannot calculate central column sum for an even number of columns." << endl;
        return;
    }

    int centralCol = numCols / 2;
    int sum = 0;

   for (int i = 0; i < numRows; ++i) {
        sum += arr[i][centralCol];
    }

   
    cout << "Sum of elements in the central column: " << sum << endl;
}

int main() {
    int numRows, numCols;

   cout << "Enter the number of rows: ";
    cin >> numRows;

    cout << "Enter the number of columns: ";
    cin >> numCols;

   if (numRows <= 0 || numRows > MAX_ROWS || numCols <= 0 || numCols > MAX_COLS) {
        cout << "Invalid dimensions. Exiting program." << endl;
        return 1;
    }

    int arr[MAX_ROWS][MAX_COLS];

   cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

   
    col_sum(arr, numRows, numCols);

    return 0;
}
