#include<iostream>
#include<queue>  // header file for priority_queue/heap
using namespace std;
// custom compare function
class Compare{
public:
    bool operator()(int a, int b){
        // return a>b;  // for min Heap
        return a<b;  // for max Heap
    }
};
int main()
{
    int arr[] = {10, 15, 20, 13, 6, 90};
    // by default max heap is created
    // priority_queue<int> maxheap;
    // for creating min heap
    // priority_queue<int, vector<int>, greater<int> > minHeap;
    priority_queue<int, vector<int>, Compare > heap;
    for(auto x:arr){
        heap.push(x);
    }
    while(!heap.empty()){
        cout << heap.top() << endl;
        heap.pop();
    }
    while(!heap.empty()){
        cout << heap.top() << endl;
        heap.pop();
    }
    return 0;
}