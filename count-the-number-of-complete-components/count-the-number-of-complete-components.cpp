class Solution {
public:
    
    void dfs(vector<vector<int>> &G, int i, vector<int> &visited, int &v, int&ce) {
        
        visited[i] = 1;

        //Keeping count of vertices and edges in a component
        v++, ce += G[i].size();

        for (auto nbr : G[i]){
            if(!(visited[nbr])) dfs(G, nbr, visited, v, ce);
        }  
    }
    
    
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> G(n, vector<int>());
        
        for (auto edge : edges){
            int u = edge[0], v = edge[1];
            G[u].push_back(v);
            G[v].push_back(u);
        }
        
        vector<int> visited(n, 0);
        
        int ccc =0;
        for (int i=0; i<n; i++) {
            if (!(visited[i])) {
                int v = 0, ce = 0;
                dfs(G, i, visited, v, ce);
                
                if (ce == v * (v-1)) ccc++;      
            }
        }
        
        return ccc;
    }
};