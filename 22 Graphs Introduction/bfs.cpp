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
    void bfs(int source){
        queue<int> q;
        bool *visited = new bool[v] {0};
        q.push(source);
        visited[source] = true;
        while(!q.empty()){
            int f = q.front();
            q.pop();
            cout << f << endl;
            for(auto nbr: l[f]){
                if(!visited[nbr]){
                    visited[nbr] = true;
                    q.push(nbr);
                }
            }
        }
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
    g.bfs(1);
    return 0;
}