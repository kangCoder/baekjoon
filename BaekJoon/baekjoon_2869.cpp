#include <iostream>
using namespace std;

int main() {
	int A, B, V; // A: 올라가는거 B: 미끄러지는거 V: 총 길이
	cin >> A >> B >> V;

	
	if (V <= A) {
		cout << 1 << endl;
	}
	else {
		cout << (V - B - 1) / (A - B) + 1 << endl;
	}
	
	
	return 0;
}