#include <iostream>
using namespace std;
void printArray(int a[]) // Array passed by reference
{
    cout << "In function the size of the array is: " << sizeof(a) << endl; // prints 8
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    // cout << "The total number of the elements of the array: " << n << endl;
    cout << "In main the size of the array is: " << sizeof(arr) << endl; // prints 24
    printArray(arr);
    return 0;
}

// Conclusion
/*
This is because in the main function we have the original array but in function printArray we 
have the addresses of the array elements which are stored in pointer variables. 

*/