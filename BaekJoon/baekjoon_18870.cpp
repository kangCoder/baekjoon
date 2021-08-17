#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
	int N, a;
	cin >> N;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		cin >> a;
		v.push_back(a);
	}
	
	vector<int> count(v);
	sort(count.begin(), count.end());
	count.erase(unique(count.begin(), count.end()), count.end());

	for (int i = 0; i < N; i++) {
		cout << lower_bound(count.begin(), count.end(), v.at(i)) - count.begin() <<" ";
	}
	return 0;
}