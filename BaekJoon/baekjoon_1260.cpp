#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int c1[1000];
int c2[1000];
vector<int> g[1001];

void BFS(int start) {
	queue<int> q;
	q.push(start);
	c1[start] = true;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << ' ';
		for (int i = 0; i < g[x].size(); i++) {
			int y = g[x][i];
			if (c1[y] == false) {
				q.push(y);
				c1[y] = true;
			}
		}
	}
}

void DFS(int start) {
	if (c2[start] == true) return;
	c2[start] = true;
	cout << start << ' ';
	for (int i = 0; i < g[start].size(); i++) {
		int y = g[start][i];
		DFS(y);
	}
}

int main() {
	int N, M, V;
	cin >> N >> M >> V;
	
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	for (int i = 0; i <= N; i++) {
		sort(g[i].begin(), g[i].end());
	}

	DFS(V);
	cout << '\n';
	BFS(V);

	return 0;
}