// Given the connection between cities,
//  Count the number of disjoint clusters of cities.


#include <iostream>
#include <vector>
using namespace std;

void dfs(int city, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[city] = true;
    
    // Visit all cities connected to the current city
    for (int neighbor : graph[city]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited);
        }
    }
}

int countDisjointClusters(int n, vector<pair<int, int>>& connections) {
    // Step 1: Build the graph (adjacency list)
    vector<vector<int>> graph(n);
    for (auto& connection : connections) {
        int city1 = connection.first;
        int city2 = connection.second;
        graph[city1].push_back(city2);
        graph[city2].push_back(city1);
    }
    
    // Step 2: Initialize visited array
    vector<bool> visited(n, false);
    int clusters = 0;

    // Step 3: Traverse all cities and count clusters
    for (int city = 0; city < n; ++city) {
        if (!visited[city]) {
            // If the city is not visited, it's a new cluster
            dfs(city, graph, visited);
            clusters++;
        }
    }
    
    return clusters;
}

int main() {
    int n = 6;  // Number of cities (0 to n-1)
    vector<pair<int, int>> connections = {{0, 1}, {1, 2}, {3, 4}};
    
    int result = countDisjointClusters(n, connections);
    cout << "Number of disjoint clusters: " << result << endl;

    return 0;
}
