#include <bits/stdc++.h>
using namespace std;

bool BFS(vector<int> adj[], int src, int dest, int v, int pred[], int dist[]){
    
    list<int> queue;

    bool visited[v];

    for (int i = 0; i < v; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }

    visited[src] = true;
    dist[src] = 0;
    queue.push_back(src);

    while (!queue.empty()) {
        int u = queue.front();
        queue.pop_front();
        for (int i = 0; i < adj[u].size(); i++) {
            if (visited[adj[u][i]] == false) {
                visited[adj[u][i]] = true;
                dist[adj[u][i]] = dist[u] + 1;
                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);

                if (adj[u][i] == dest)
                    return true;
            }
        }
    }

    return false;
}


int wed(int population, int relations, int rels[][2], int source, int dest){

    vector<int> adj[++population];
    for (int i = 0; i < relations; ++i){ 
        adj[rels[i][0]].push_back(rels[i][1]);
        adj[rels[i][1]].push_back(rels[i][0]);
    }

    int pred[population], dist[population];

    if (BFS(adj, source, dest, population, pred, dist) == false)
        return -1;

    return dist[dest]-1;
}


int main(){

    int a[6][2]={{1,2},{2,4},{1,3},{1,7},{5,7},{7,6}};
    int population = 7, relations=6;
    int source = 4, dest = 6;

    cout<<wed(population,relations,a,source,dest)<<endl;

    int b[5][2]={{1,3},{1,4},{2,5},{2,6},{5,7}};
    population = 7, relations=5;
    source = 3, dest = 7;

    cout<<wed(population,relations,b,source,dest)<<endl;

    return 0;
}