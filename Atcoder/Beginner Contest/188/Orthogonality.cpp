#include <iostream>
#include <vector>
using namespace std;
int main () {
	int n, b;
	long long prod = 0;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) {
		cin >> b;
		prod += a[i] * b;
	}
	if (prod) cout << "No\n";
	else cout << "Yes\n";
	return 0;
}
