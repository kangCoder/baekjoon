#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int N, sum = 0;
	cin >> N;

	int* arr = new int[N];
	int count[8001] = { 0 };
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		sum += arr[i];
		count[arr[i] + 4000]++;
	}
	sort(arr, arr + N);
	
	double a = (double)sum / N;
	int avg = round(a);

	int mid = arr[N / 2];
	
	int mode = 0, max = 0;
	for (int i = 0; i <= 8000; i++) {
		if (max < count[i]) {
			max = count[i];
			mode = i;
		}
	}
	for (int i = mode + 1; i <= 8000; i++) {
		if (count[mode] == count[i]) {
			mode = i;
			break;
		}
	}
	
	int range = arr[N - 1] - arr[0];

	cout << avg << endl;
	cout << mid << endl;
	cout << mode - 4000 << endl;
	cout << range << endl;
	
	delete[] arr;
	return 0;
}