#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0;
	cin >> n;
	vector<int> h(n);
	vector<int> g(n);
	for (int i = 0; i < n; i++)
		cin >> h[i] >> g[i];
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (h[i] == g[j])
			       	ans++;
			if (g[i] == h[j])
				ans++;
		}
	cout << ans << endl;
	return 0;
}
