#include <iostream>
using namespace std;

int main() {
    int rows, columns, a[10][10], b[10][10], sum[10][10], i, j;
    cout << "Enter the number of rows: " << endl;
    cin >> rows;
    cout << "Enter the number of columns: " << endl;
    cin >> columns;

    cout << "Enter elements of 1st matrix: " << endl;
    for (i = 0; i < rows; ++i)
        for (j = 0; j < columns; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << ":";
            cin >> a[i][j];
        }

    cout << "Enter elements of 2nd matrix: " << endl;
    for (i = 0; i < rows; ++i)
        for (j = 0; j < columns; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << ":";
            cin >> b[i][j];
        }

    // adding two matrices
    for (i = 0; i < rows; ++i)
        for (j = 0; j < columns; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }

    // printing the result
    cout << "Sum of two matrices: " << endl;
    for (i = 0; i < rows; ++i)
        for (j = 0; j < columns; ++j) {
            printf("%d   ", sum[i][j]);
            if (j == columns - 1) {
                printf("\n\n");
            }
        }
    return 0;
}
