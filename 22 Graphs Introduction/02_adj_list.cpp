#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;
class Node{
public:
    string city_name;
    list<string> nbrs;    
    Node(string name){
        this->city_name = name;
    }
};
class Graph{
    unordered_map<string, Node*> m;
public:
    // creating a new node for a city belonging to the vector cities
    Graph(vector<string> cities){
        for(auto city:cities){
            m[city] = new Node(city);
        }
    }
    // adding edge between two city nodes
    void addEdge(string x, string y, bool undir = false){
        m[x]->nbrs.push_back(y);
        if(undir){
            m[y]->nbrs.push_back(x);
        }
    }
    // printing the graph
    void printAdjList(){
        for(auto cityPair: m){
            auto city = cityPair.first;
            Node* node = cityPair.second;
            cout << city << "-->";
            for(auto nbr:node->nbrs){
                cout << nbr << ", ";
            }
            cout << endl;
        }
    }
};
int main(){
    vector<string> cities = {"Delhi", "London", "Paris", "New York"};
    Graph g(cities);
    g.addEdge("Delhi", "London");
    g.addEdge("New York", "London");
    g.addEdge("Delhi", "Paris");
    g.addEdge("Paris", "New York");
    g.printAdjList();
    return 0;
}