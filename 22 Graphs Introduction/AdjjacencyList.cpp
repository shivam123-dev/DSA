#include<iostream>
#include<list>
using namespace std;
class Graph{
    int v;
    list<int> *l;
public:
    Graph(int v){
        l = new list<int> [v];
        this->v = v;
    }
    void insert(int i, int j, bool undir = true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }
    void print(){
        for(int i=0;i<v;i++){
            cout << i << "-->";
            for(auto node:l[i]){
                cout << node << ",";
            }
            cout << endl;
        }
    }
};
int main(){
    Graph g(6);
    g.insert(0, 1);
    g.insert(0, 4);
    g.insert(2, 1);
    g.insert(3, 4);
    g.insert(4, 5);
    g.insert(2, 3);
    g.insert(3, 5);
    g.print();
    return 0;
}