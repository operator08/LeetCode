class Solution {
public:
    int bfs(int n, vector<vector<int>>& adjList) {
        vector<bool> visited(n, false);
        queue<int> nodeQueue;
        nodeQueue.push(0);
        visited[0] = true;
        int currentLayerNodeCount = 1;
        int nextLayerNodeCount = 0;
        int layersExplored = 0;
        while (!nodeQueue.empty()) {
            for (int i = 0; i < currentLayerNodeCount; ++i) {
                int currentNode = nodeQueue.front();
                nodeQueue.pop();
                if (currentNode == n - 1) {
                    return layersExplored;  
                }

                for (auto neighbor : adjList[currentNode]) {
                    if (visited[neighbor]) continue;
                    nodeQueue.push(neighbor);  
                    nextLayerNodeCount++;  
                    visited[neighbor] = true;
                }
            }
            currentLayerNodeCount = nextLayerNodeCount;
            nextLayerNodeCount = 0;  
            layersExplored++;  
        }

        return -1; 
    }

    vector<int> shortestDistanceAfterQueries(int n,
                                             vector<vector<int>>& queries) {
        vector<int> answer;
        vector<vector<int>> adjList(n, vector<int>(0));
        for (int i = 0; i < n - 1; i++) {
            adjList[i].push_back(i + 1);
        }
        for (auto& road : queries) {
            int u = road[0];
            int v = road[1];
            adjList[u].push_back(v);  
            answer.push_back(bfs(n, adjList));
        }
        return answer;
    }
};

