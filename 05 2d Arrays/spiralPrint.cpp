// Print the 2D array in spiral order
#include <iostream>
using namespace std;
void print(int arr[][100], int n, int m)
{
    int startCol = 0, endCol = n - 1, endRow = m - 1, startRow = 0;
    while (startCol <= endCol and startRow <= endRow)
    {
        // start row
        for (int col = startCol; col <= endCol; col++)
        {
            cout << arr[startRow][col] << " ";
        }
        // end col
        for (int row = startRow + 1; row <= endRow; row++)
        {
            cout << arr[row][endCol] << " ";
        }
        // end row
        for (int col = endCol - 1; col >= startCol; col--)
        {
            if (startRow == endRow)
            {
                break;
            }
            cout << arr[endRow][col] << " ";
        }
        // start col
        for (int row = endRow - 1; row >= startRow + 1; row--)
        {
            if (startCol == endCol)
            {
                break;
            }
            cout << arr[row][startCol] << " ";
        }
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}
int main()
{
    int arr[100][100];
    int m, n;
    cout << "Enter number of rows and columns respectively: ";
    cin >> n >> m;
    cout << "Enter elements of the matrix: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    cout << "Printing array in spiral order: " << endl;
    print(arr, n, m);
    return 0;
}