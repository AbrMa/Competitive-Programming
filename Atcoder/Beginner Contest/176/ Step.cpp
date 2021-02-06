#include <iostream>
#include <vector>
using namespace std;
int main () {
	long long n, sum = 0;
	cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 1; i < n; i++) 
		if (a[i] < a[i-1]) {
			sum += a[i-1] - a[i];
			a[i] += a[i-1] - a[i];
		}
	cout << sum << endl;
	return 0;
}
