#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,sx=0,sy=0,sz=0;
	cin >> n;
	vector<int> x(n);
	vector<int> y(n);
	vector<int> z(n);
	for (int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i] >> z[i];
		sx += x[i];	
		sy += y[i];	
		sz += z[i];	
	}
	if (sx == 0 && sy == 0 && sz == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
