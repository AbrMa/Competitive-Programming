#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main () {
	int n, m, li;
	cin >> n >> m;
	vector<int> a(n), l(n);
	set<int> d;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = n - 1; i >= 0; i--) {
		d.insert(a[i]);
		l[i] = d.size();
	}
	while (m--) {
		int i;
		cin >> i;
		i--;
		cout << l[i] << endl;
	}
	return 0;
}
