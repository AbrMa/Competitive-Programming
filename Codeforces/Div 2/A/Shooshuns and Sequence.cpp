#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first 
#define S second 
#define PB push_back 
#define MP make_pair
bool valid(vi &a, int k)
{
	bool ans = true;
	int n = a[k];
	for (int i = k; i < a.size(); i++)
		if (a[i] != n)
			ans = false;
	return ans;
}
int ans(vi &a, int k)
{
	int n = a[k];
	while (a[k] == n && k >= 0)
		k--;
	if (k < 0) return 0;
	else if (n == a[k]) return k;
	else return k + 1;
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n, k;
	cin >> n >> k;
	vi a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	if (valid(a, k - 1)) cout << ans(a, k -1) << endl;
	else cout << "-1\n";	
	return 0;
}
