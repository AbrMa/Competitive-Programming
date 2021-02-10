#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	long long t = 0;
	for (int i = 0; i < n; i++)
		t += abs(i+1-a[i]);
	cout << t << endl;
	return 0;
}
