#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> arr, int k){
    int s=0, e=arr.size()-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[s]<=arr[mid]){
            if(k>=arr[s] and k<=arr[mid]){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        else{
            if(k>=arr[mid] and k<=arr[e]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int k;
    cin>>k;
    cout << search(arr, k) << endl;
    return 0;
}