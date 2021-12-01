// Allocating arrays dynamically
#include<iostream>
using namespace std;
int main(){

    // taking input for number of students
    int n;
    cout<<"Enter number of students: ";
    cin>>n;

    // creating a dynamic array
    int *marks = new int[n];

    // taking marks
    cout << "Enter the marks: ";
    for(int i=0;i<n;i++){
        cin >> marks[i];
    }

    // printing the marks
    cout << "The marks of the students are: " << endl;
    int i=-1;
    for(i=0;i<n-1;i++){
        cout << marks[i] << ", ";
    }

    cout << marks[i] << endl;

    return 0;
}