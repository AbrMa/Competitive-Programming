#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0,max,min;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	b = a;
	sort(b.begin(),b.end());
	int i = 0,j = n - 1;
	while (a[i] != b[n-1])
	{
		ans++;
		i++;
	}
	while (a[j] != b[0])
	{
		ans++;
		j--;
	}
	if (i > j)
		ans--;
	cout << ans << endl;
	return 0;
}
