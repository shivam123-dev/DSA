#include <iostream>
using namespace std;
bool isSafe(int mat[][9], int no, int i, int j){
    // row wise and col wise check
    for(int k=0; k<9;k++){
        if(mat[k][j] == no || mat[i][k] == no){
            return false;
        }
    }
    // subgrid check
    int sx = (i/3)*3, sy = (j/3)*3;
    for(int k=sx;k<(sx+3);k++){
        for(int a=sy;a<(sy+3);a++){
            if(mat[k][a] == no){
                return false;
            }
        }
    }
    return true;
}
bool solve(int mat[][9], int n, int i, int j){
    // base case
    if(i == n){
        // print the solution
        for(int k=0;k<n;k++){
            for(int a=0;a<n;a++){
                cout << mat[k][a] << ", ";
            }
            cout << endl;
        }
        return true;
    }
    // corner case
    if(j == n){
        return solve(mat, n, i+1, 0);
    }
    // prefilled case
    if(mat[i][j]){
        return solve(mat, n, i, j+1);
    }
    // rec case
    // try out all the possiblities
    for(int no=1;no<=9;no++){
        if(isSafe(mat, no, i, j)){
            mat[i][j] = no;
            if(solve(mat, n, i, j+1)){
                return true;
            }
        }
    }
    // backtracking
    mat[i][j] = 0;
    return false;
}
int main()
{
    int mat[][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};
    int n = 9;
    if (solve(mat, n, 0, 0))
    {
        cout << "Hence, solution Exists" << endl;
    }
    else
    {
        cout << "Solution does not exist" << endl;
    }
    return 0;
}