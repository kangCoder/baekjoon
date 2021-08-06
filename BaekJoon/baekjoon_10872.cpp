#include <iostream>
using namespace std;

int fact(int N) {
	if(N > 0)
		return N * fact(N - 1);
	return 1;
}

int main() {
	int N;
	cin >> N;

	cout << fact(N) << endl;
	return 0;
}