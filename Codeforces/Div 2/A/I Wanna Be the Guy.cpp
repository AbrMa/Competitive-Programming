#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,l[102] = {0},btg=1;
	cin >> n >> p;
	vector<int> x(p);
	for (int i = 0; i < p; i++)
	{
	 	cin >> x[i];
		l[x[i]]++;
	}
	cin >> p;
	vector<int> y(p);
	for (int i = 0; i < p; i++)
	{
		cin >> y[i];
		l[y[i]]++;
	}
	for (int i = 1; i <= n; i++)
		if (!l[i])
			btg = 0;
	if (btg)
		cout << "I become the guy." << endl;
	else
		cout << "Oh, my keyboard!" << endl;
	return 0;
}