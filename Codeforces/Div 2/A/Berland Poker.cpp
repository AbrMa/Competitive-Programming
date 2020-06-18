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
	int t,n,m,k;
	cin >> t;
	while (t--)
	{
		cin >> n >> m >> k;
		int cards = n / k, win, ans;
		if (m <= cards) win = m; 
		else win = cards;
		m -= win;
		k--;
		vi p(k);
		for (int i = 0; i < k && m; i = (i+1)%k)
		{
			p[i]++;
			m--;
		}
		sort(p.rbegin(),p.rend());
		ans = win - p[0];
		cout << ans << endl;
	}
	return 0;
}
