#include <iostream>
using namespace std;

int main() {
	int A, B, V; // A: �ö󰡴°� B: �̲������°� V: �� ����
	cin >> A >> B >> V;

	
	if (V <= A) {
		cout << 1 << endl;
	}
	else {
		cout << (V - B - 1) / (A - B) + 1 << endl;
	}
	
	
	return 0;
}