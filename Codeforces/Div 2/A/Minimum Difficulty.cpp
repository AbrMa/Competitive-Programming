#include <iostream>
#include <vector>
using namespace std;
int difficulty(vector<int> a);
int main()
{
	int n,ans=INT_MAX,d;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 1; i < n - 1; i++)
	{
		vector<int> b;
		for (int j = 0; j < n; j++)
			if (i != j)
				b.push_back(a[j]);
		d = difficulty(b);
		ans = min(ans,d);
	}
	cout << ans << endl;
	return 0;
}

int difficulty(vector<int> a)
{
	int d = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (i - 1 >= 0)
			d = max(d,abs(a[i]-a[i-1]));
		if (i + 1 < a.size())
			d = max(d,abs(a[i]-a[i+1]));
	}
	return d;
}
