#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int arr[100] = { 0 };
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int min = 300000;
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int sum = arr[i] + arr[j] + arr[k];
				int min1 = M - sum;
				if (min1 >= 0 && min1 < min)
					min = min1;
			}
		}
	}

	cout << M - min << endl;

}