#include <iostream>
#include <algorithm> // header file for using sort function
using namespace std;

// for descending
// bool compare(int a, int b){
//     return a>b;
// }

// for ascending
// bool compare(int a, int b){
//     return a<b;
// }

int main() {
    int arr[] = {12, 4, 1, 5, 21, 45};
    int n = sizeof(arr) / sizeof(int);
    
    // Sorting in ascending order
    // 1st way:-
    // sort(arr, arr+n);

    // 2nd way:-
    // sort(arr, arr+n, compare);
    // Sorting in descending order
    
    // 1st way:-
    // sort(arr, arr+n);
    // reverse(arr, arr+n);

    // 2nd way:-
    // sort(arr, arr+n, greater<int>());

    // 3rd way:-
    // sort(arr, arr+n, compare);
    
    // Printing the output
    for(int x:arr){
        cout << x << ", ";
    }
    cout << endl;
    return 0;
}
