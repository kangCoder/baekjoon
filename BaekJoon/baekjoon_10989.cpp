#include <iostream>
using namespace std;

int main() {	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, m;
	int max = 0;
	cin >> N;
	int arr[10001] = { 0 };

	for (int i = 0; i < N; i++) {
		cin >> m;
		arr[m]++;
		if (max < m)
			max = m;
	}
	
	for (int i = 1; i <= max; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++)
				cout << i << '\n';
		}
	}
	
	return 0;
}