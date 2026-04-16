#include<bits/stdc++.h>
using namespace std;

//Implementing Graph data Structure
template<typename T> class Graph
{
    T data;
    list<T> *l;
    public:
    
    Graph(T n)
    {
        this->data = n;
        l = new list<T> [data];
    }

    void add_node(T u, T v){
        l[u].push_back(v);
        l[v].push_back(u);
    }  
};

//implementing DFS algorithm
template<typename T>void DFS(list<T>* graph, T source, unordered_map<T, bool>& visited){
    vector<T> neighbors = graph[source];
    cout << source << " ";
    visited[source] = true;
    for(T val: neighbors)
    {
        if(!visited[val]){
            DFS(graph, val, visited);
        }
    }
}

int main()
{

    return 0;
}


