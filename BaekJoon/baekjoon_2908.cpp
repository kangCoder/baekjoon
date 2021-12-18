#include <iostream>
#include <string>
using namespace std;

void swap(char* a, char* b) {
	char* tmp = a;
	a = b;
	b = tmp;
}
int main() {
	string A, B;
	cin >> A >> B;
	swap(A[0], A[2]);
	swap(B[0], B[2]);

	int a = stoi(A);
	int b = stoi(B);

	if (a >= b)
		cout << a << endl;
	else
		cout << b << endl;
	return 0;
}