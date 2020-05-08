#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b,ans;
	cin >> n >> m >> a >> b;
	if (n <= m)
		ans = min(n*a,b);
	else
	{
		ans = min(n*a, (n/m)*b + (n%m)*a);
		ans = min(ans, ((n/m)+1)*b);
	}
	cout << ans << endl;
	return 0;
}