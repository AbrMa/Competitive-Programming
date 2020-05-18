#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	int n,m,v=101;
	cin >> n >> m;
	vector<int> a(n),b(m),c;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	for (int i = 1; i <= b[0] - 1; i++)
		c.push_back(i);
	for (int i = 0; i < c.size(); i++)
	{
		int two = 1, three = 0, four = 1;
		for (int j = 0; j < n; j++)
		{
			if (a[j] > c[i])
				two = 0;
			if (2*a[j] <= c[i])
				three = 1;
		}
		for (int j = 0; j < m; j++)
			if (c[i] >= b[j])
				four = 0;
		if (two && three && four)
			v = min(v,c[i]);
	}
	if (v < 101) cout << v << endl;
	else cout << "-1" << endl;
	return 0;
}
