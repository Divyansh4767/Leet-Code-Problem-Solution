class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination)   return true;
        //make adjList
        vector<int> adj[n+1];
        for(auto i: edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        //do BFS
        unordered_map<int, bool> visited;
        queue<int> q;
        visited[source] = true;
        q.push(source);

        while(!q.empty()){
            int front = q.front();
            q.pop();

            for(auto i: adj[front]){
                if(!visited[i]){
                    if(i == destination){
                        return true;
                    }
                    else{
                        visited[i] = true;
                        q.push(i);
                    }
                }
            }
        }
        return false;
    }
};