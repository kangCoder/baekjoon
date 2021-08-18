#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	int* result = new int[N];
	stack<int> s;

	for (int i = 0; i < N; i++)
		cin >> arr[i];
	
	for (int i = N - 1; i >= 0; i--) {
		while (!s.empty() && s.top() <= arr[i])
			s.pop();
		if (s.empty())
			result[i] = -1;
		else
			result[i] = s.top();
		s.push(arr[i]);
	}

	for (int i = 0; i < N; i++)
		cout << result[i] << " ";

	delete[] arr;
	delete[] result;
	return 0;
}