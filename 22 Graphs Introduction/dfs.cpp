#include <iostream>
#include <list>
#include <queue>
using namespace std;
class Graph
{
    int v;
    list<int> *l;

public:
    Graph(int v)
    {
        l = new list<int>[v];
        this->v = v;
    }
    void insert(int i, int j, bool undir = true)
    {
        l[i].push_back(j);
        if (undir)
        {
            l[j].push_back(i);
        }
    }
    void print()
    {
        for (int i = 0; i < v; i++)
        {
            cout << i << "-->";
            for (auto node : l[i])
            {
                cout << node << ",";
            }
            cout << endl;
        }
    }
    void dfsHelper(int node, bool* visited){
        cout << node << endl;
        visited[node] = true;
        for(auto nbr:l[node]){
            if(!visited[nbr]){
                dfsHelper(nbr, visited);
            }
        }
        return;
    }
    void dfs(int source){
        bool *visited = new bool [v] {0};
        dfsHelper(source, visited);
    }
};
int main()
{
    Graph g(7);
    g.insert(0, 1);
    g.insert(1, 2);
    g.insert(2, 3);
    g.insert(3, 5);
    g.insert(5, 6);
    g.insert(4, 5);
    g.insert(0, 4);
    g.insert(3, 4);
    g.dfs(1);
    return 0;
}