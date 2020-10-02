#include <iostream>
#include <vector>
using namespace std;
vector <int> adj[10];
bool visited[10];

void dfs(int s) {
	visited[s] = true;
	for (int i=0;i<adj[s].size();++i) {
		if (visited[adj[s][i]] == false) {
			dfs(adj[s][i]);
		}
	}
}

void initialize() {
	for (int i=0;i<10;++i) {
		visited[i] = false;
	}
}
main () {
	int nodes, edges, x, y, connectedComponents = 0;
	cin>>nodes;
	cin>>edges;
	for (int i=0;i<edges;++i) {
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	} 
	initialize();
	
	for (int i=1;i<=nodes;++i) {
		if (visited[i] == false) {
			dfs(i);
			connectedComponents++;
		}
	}
	
	cout<<"Number of Connected components: "<<connectedComponents<<endl;
}