#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void){
    vector<int> v = {11, 22, 33, 5, 131, 1212};
    int key;
    cin >> key;
    vector<int>::iterator it = find(v.begin(), v.end(), key);
    if(it!=v.end()){
        cout << "Element present at: " << it - v.begin() << endl;
    }
    else{
        cout << "Element not present" << endl;
    }
}