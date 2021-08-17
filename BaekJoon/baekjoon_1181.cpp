#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.length() < b.length())
		return true;
	else if (a.length() == b.length()) {
		return a < b;
	}
	return false;
}
int main() {
	int N;
	cin >> N;
	string* arr = new string[N];

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N, compare);

	cout << arr[0] << '\n';
	for (int i = 1; i < N; i++) {
		if(arr[i]!=arr[i-1])
			cout << arr[i] << '\n';
	}

	delete[] arr;
	return 0;
}