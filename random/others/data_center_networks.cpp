#include <bits/stdc++.h>
using namespace std;

class Graph{
    vector<vector<int>> edges;
    int n;

    public:
        Graph(int n){
            this->n = n;
        }

        void addEdge(int u, int v, int w){
            this->edges.push_back({u,v,w});
        }

        static bool compare(vector<int> &a, vector<int> &b){
            return a[2] < b[2];
        }

        void makeSet(vector<int> &rank, vector<int> &parent, int n){
            for(int i=0; i<n ;i++){
                parent[i] = i;
                rank[i] = 0;
            }
        }

        int findParent(vector<int> &parent, int node){
            if (parent[node] == node) return node;
            return parent[node] = findParent(parent, parent[node]);
        }

        void unionSet(int u, int v, vector<int> &rank, vector<int> &parent){
            u = this->findParent(parent, u);
            v = this->findParent(parent, v);
            
            if (rank[u] < rank[v]){
                parent[u] = v;
            }
            else if (rank[v] < rank[u]){
                parent[v] = u;
            }
            else{
                parent[v] = u;
                rank[u]++;
            }

        }

        vector<vector<int>> kruskalMst(){
            int n = this->n;
            vector<int> parent(n);
            vector<int> rank(n);
            vector<vector<int>> ans;

            sort(this->edges.begin(), this->edges.end(), this->compare);
            this->makeSet(rank, parent, n);

            for(int i=0; i<this->edges.size(); i++){
                int u = this->findParent(parent, this->edges[i][0]);
                int v = this->findParent(parent, this->edges[i][1]);
                int w = this->edges[i][2];

                if (u != v){
                    ans.push_back({u,v,w});
                    this->unionSet(u,v,rank,parent);
                }
            }

            return ans;
            
        }

};

int getMinMaxLatency(int g_nodes, vector<int>& g_from, vector<int>& g_to, vector<int>& g_weight, int k){
    Graph g(g_nodes);
    int edges = g_from.size();
    for(int i=0; i<edges; i++){
        g.addEdge(g_from[i],g_to[i],g_weight[i]);
    }
    
    vector<vector<int>> kruskalMst = g.kruskalMst();
    
    int network = 1;

    for(int i=network; i<k; i++){
        kruskalMst.pop_back();
        network++;
    }

    if (kruskalMst.empty()){
        return 0;
    }

    return kruskalMst.back()[2];

}

int main(){
    int g_nodes = 3;
    vector<int> g_from = {0, 1, 2};
    vector<int> g_to = {1, 2, 0};
    vector<int> g_weight = {4, 5, 3};
    int k = 2;

    int result = getMinMaxLatency(g_nodes, g_from, g_to, g_weight, k);
    cout << "Minimum Max Latency: " << result << endl;

    return 0;
}