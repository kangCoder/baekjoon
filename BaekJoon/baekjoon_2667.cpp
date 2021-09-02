#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;

int N; 
int arr[25][25]; // 아파트
bool check[25][25] = { 0, }; // 방문했는지 체크
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 }; // 상하좌우 체크하게 해주는.
int dangi = 0; // 단지수
int home[625] = { 0, }; // 단지내 집의 수

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x,y });
	home[dangi]++;
	check[x][y] = true;
	
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
				if (arr[nx][ny] == 1 && check[nx][ny] == false) {
					q.push({ nx,ny });
					check[nx][ny] = true;
					home[dangi]++;
				}
			}
		}
	}
		dangi++;
}

void ssort(int* arr) {
	for (int i = 0; i < dangi - 1; i++) {
		for (int j = i + 1; j < dangi; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 1 && check[i][j] == false) {
				bfs(i, j);
			}
		}
	}

	cout << dangi << endl;
	ssort(home);
	for (int i = 0; i < dangi; i++)
		cout << home[i] << endl;
	return 0;
}