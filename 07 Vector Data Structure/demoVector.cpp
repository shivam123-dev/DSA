#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 21};

    for(int i:arr){
        cout << i << " ";
    }
    cout << endl;
    // adding an element at the back of the vector
    arr.push_back(14);

    // popping an element from the last
    arr.pop_back();

    // adding an element at the back of the vector
    arr.push_back(16);

    // printing all the elements of updated vector 
    for(int i:arr){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Capacity
    cout << arr.capacity() << endl;

    // Size of vector => Number of elements in the array
    cout << arr.size() << endl;
}