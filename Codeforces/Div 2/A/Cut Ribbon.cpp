#include <iostream>
using namespace std;
int n,a,b,c,l[50000] = {0};
int dp(int n)
{
	if (n == 0) return 0;
	if (n < 0) return -1 * INT_MAX;
	if (l[n]) return l[n];
	int A = dp(n-a) + 1;
	int B = dp(n-b) + 1;
	int C = dp(n-c) + 1;
	l[n] = max(A, max(B,C));
	return l[n];
}
int main()
{
	cin >> n >> a >> b >> c;
	cout << dp(n) << endl;
	return 0;
}
