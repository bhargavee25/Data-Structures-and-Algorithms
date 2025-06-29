class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int v=adj.size();
        vector<int> res;
        queue<int> q;
        int s=0;
        vector<bool> visited (v,false);
        visited[s]=true;
        q.push(s);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            res.push_back(curr);
            for (int x: adj[curr]){
                if  (!visited[x]){
                    visited[x]=true;
                    q.push(x);
                }
            }
        }
    }
};
