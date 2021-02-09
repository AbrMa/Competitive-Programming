#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	//chtm
	int n, l, r, m, t;
	cin >> n;
	vector<long long> stones(n+1), v(n+1,0), u(n+1,0);
	for (int i = 1; i <= n; i++) {
		cin >> stones[i];
		v[i] += v[i - 1];  
		v[i] += stones[i];
	}
	sort(stones.begin(), stones.end());
	for (int i = 1; i <= n; i++) {
		u[i] += u[i - 1];
		u[i] += stones[i];
	}
	cin >> m;
	while (m--) {
		cin >> t >> l >> r;
		l--;
		if (t == 1) cout << (v[r] - v[l]);
		else cout << (u[r] - u[l]);
		cout << endl;
	}
	return 0;
}
