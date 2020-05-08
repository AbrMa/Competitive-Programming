#include <iostream>
using namespace std;
int main()
{
	int x[200],y[200],n,ans=0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	for (int i = 0; i < n; i++)
	{
		int l=0,r=0,u=0,d=0;
		for (int j = 0; j < n; j++)
		{
			if (y[j] == y[i])
			{
				if (x[j] > x[i]) r = 1;
				if (x[j] < x[i]) l = 1;
			}
			if (x[j] == x[i])
			{
				if (y[j] < y[i]) d = 1;
				if (y[j] > y[i]) u = 1;
			}
		}
		if (l && r && u && d) ans++;
	}
	cout << ans << endl;
	return 0;
}
