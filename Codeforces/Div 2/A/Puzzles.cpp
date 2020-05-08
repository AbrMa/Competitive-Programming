#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,ans=1000000000;
	cin >> n >> m;
	vector<int> f(m);
	for (int i = 0; i < m; i++)
		cin >> f[i];
	sort(f.begin(),f.end());
	int i = 0, j = n - 1;
	while (j < m)
	{
		ans = min(ans,f[j]-f[i]);
		i++;
		j++;
	}
	cout << ans << endl;
	return 0;
}
