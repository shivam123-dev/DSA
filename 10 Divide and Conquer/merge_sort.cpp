#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a, int s, int e){
    int i=s;
    int mid = (s+e)/2;
    int j = mid+1;
    vector<int> temp;
    while(i<=mid and j<=e){
        if(a[i]<a[j]){
            temp.push_back(a[i]);
            i++;
        }
        else{
            temp.push_back(a[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(a[i++]);
    }
    while(j<=e){
        temp.push_back(a[j++]);
    }
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        a[idx] = temp[k++];
    }
    return;
}
void mergeSort(vector<int> &a, int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(a, s, mid);
    mergeSort(a, mid+1, e);
    return merge(a, s, e);
}
int main(){
    vector<int> arr = {10, 0, 6, 2, 7, 12};
    int n = arr.size();
    mergeSort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}