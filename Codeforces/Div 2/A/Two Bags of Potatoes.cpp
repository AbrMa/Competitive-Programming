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
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	ll y, k, n;
	vector<ll> ans;
	cin >> y >> k >> n;
	for (ll i = k; i <= n; i += k) 
		if (i - y >= 1) ans.PB(i - y);
	if (ans.empty()) cout << "-1\n";
	else for (auto a : ans) cout << a << " ";
	return 0;
}
