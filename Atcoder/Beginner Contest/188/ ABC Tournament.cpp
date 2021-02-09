#include <iostream>
#include <vector>
using namespace std;
int main () {
	int n, l = 0, r = 0;
	cin >> n;
	n = 1 << n;
	vector<int> A(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = 0; i < n / 2; i++)
		l = max(l,A[i]);
	for (int i = n / 2; i < n; i++)
		r = max(r,A[i]);
	for (int i = 0; i < n; i++)
		if (A[i] == min(l,r)) {
			cout << (i + 1) << endl;
			break;
		}
	return 0;
}
