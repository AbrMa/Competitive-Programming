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
	int n,m,ans=0;
	cin >> n >> m;
	vi tv(n);
	for (int i = 0; i < n; i++) cin >> tv[i];
	sort(tv.begin(), tv.end());
	for (int i = 0; i < n && m; i++)
	{
		if (tv[i] < 0)
		{
			ans += abs(tv[i]);
			m--;
		}
		else m = 0;
	}
	cout << ans << endl;
	return 0;
}
