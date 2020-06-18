#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <unordered_map>
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
	unordered_map<ll, ll> nums;
	ll n, ans = 0;
	int aux, mx = 1, mn = 1000000000;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> aux;
		mn = min(mn, aux);
		mx = max(mx, aux);
		nums[aux]++;
	}
	int dif = mx - mn;
	if (dif == 0) ans = (n * (n - 1)) / 2;
	else ans = nums[mx] * nums[mn];
	cout << dif  << " " << ans << endl;
	return 0;
}
