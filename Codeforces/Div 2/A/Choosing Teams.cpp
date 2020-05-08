#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n,k,ans=0,t=0;
	cin >> n >> k;
	vector<int> y(n);
	for (int i = 0; i < n; i++)
	{
		cin >> y[i];
		y[i] += k;
		if (y[i] <= 5)
			t++;
		if (t == 3)
		{
			ans++;
			t = 0;
		}
	}
	cout << ans << endl;
	return 0;
}