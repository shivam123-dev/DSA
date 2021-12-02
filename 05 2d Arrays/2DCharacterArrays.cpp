#include<iostream>
using namespace std;
int main()
{
    char characterArray[][100]={
        "one",
        "two",
        "three",
        "forty",
        "hundred",
    };

    for(int i=0;i<5;i++){
        cout << characterArray[i] << endl;
    }

    cout << characterArray[2][1];
    return 0;
}