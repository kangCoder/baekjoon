#include <iostream>
#include <algorithm>
using namespace std;

struct point {
	int x;
	int y;
};

bool compare(point p1, point p2) {
	if (p1.x < p2.x)
		return true;
	else if (p1.x == p2.x)
		if (p1.y < p2.y) return true;

	return false;
}

int main() {
	int N;
	cin >> N;
	point arr[100001] = { 0 };
	for (int i = 0; i < N; i++)
		cin >> arr[i].x >> arr[i].y;

	sort(arr, arr + N, compare);

	for (int i = 0; i < N; i++)
		cout << arr[i].x << " " << arr[i].y << '\n';

	return 0;
}