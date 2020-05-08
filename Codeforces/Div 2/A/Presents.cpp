#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,aux;
	cin >> n;
	vector<int> p(n+1);
	for (int i = 1; i <= n; i++)
	{
		cin >> aux;
		p[aux] = i;
	}
	for (int i = 1; i <= n; i++)
		cout << p[i] << " ";
	cout << endl;
	return 0;
}
