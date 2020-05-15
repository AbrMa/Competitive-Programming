#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int t,n,k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		vector<int> a(n),b(n),c;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		sort(a.rbegin(),a.rend());
		sort(b.rbegin(),b.rend());
		int i_a = 0, i_b = 0;
		while (k && i_a < n && i_b < n)
		{
			if (a[i_a] >= b[i_b])
			{
				c.push_back(a[i_a]);
				i_a++;
			}
			else
			{
				c.push_back(b[i_b]);
				i_b++;
				k--;
			}
		}
		for (; i_a < n; i_a++)
			c.push_back(a[i_a]);
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			//cout << c[i] << " ";
			sum += c[i];
		}
		cout << sum << endl;
	}
	return 0;
}
