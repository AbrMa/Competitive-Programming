#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;
int main () {
	int n;
	long long sum = 0;
	cin >> n;
	vector<long long> A(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = n - 2; i >= 0; i--) {
		sum += (A[i] % MOD) * (A[i + 1] % MOD);
		sum %= MOD;
		A[i] += (A[i + 1] % MOD);
	}
	cout << (sum % MOD) << endl;
	return 0;
}
