#include <iostream>
using namespace std;
bool isSafe(int **arr, int x, int y, int n, int **solArr)
{
    if (x < n and y < n and arr[x][y] == 1)
    {
        return true;
    }
    return false;
}
bool ratInMaze(int **arr, int x, int y, int n, int **solArr)
{
    // base case
    if (x == n - 1 and y == n - 1)
    {
        solArr[x][y] = 1;
        return true;
    }
    // recursive case
    if (isSafe(arr, x, y, n, solArr))
    {
        solArr[x][y] = 1;
        if (ratInMaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        else if (ratInMaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }
    if (ratInMaze(arr, 0, 0, n, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j];
            }
        }
    }
    return 0;
}