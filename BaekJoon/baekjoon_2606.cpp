#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> g[101];
int c[100];
int X = 0;

void BFS(int start) {
	queue<int> q;
	q.push(start);
	c[start] = true;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < g[x].size(); i++) {
			int y = g[x][i];
			if (c[y] == false) {
				q.push(y);
				c[y] = true;
				X++;
			}
		}
	}
}

int main() {
	int C, n;
	cin >> C;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	BFS(1);
	cout << X << '\n';
	return 0;
}