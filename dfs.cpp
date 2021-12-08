	vector<int> ans;
    void dfs(int source, vector<int> adj[], vector<int> &visited)
    {
        visited[source]=1;
        ans.push_back(source);
        for(auto i : adj[source])
        {
            if(!visited[i])
                dfs(i, adj, visited);
        }
            
    }
    vector<int> dfsOfGraph(int v, vector<int> adj[]) 
    {
        ans.clear();
        vector<int> visited(v,0);
        //int *visited=(int *)malloc(sizeof(int)*v);
        dfs(0, adj, visited);
        return ans;
    }