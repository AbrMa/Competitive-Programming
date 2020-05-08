#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	long long int s;
	int n,succes=1;
	cin >> s >> n;
	vector< pair<int,int> > d(n);
	for (int i = 0; i < n; i++)
		cin >> d[i].first >> d[i].second;
	sort(d.begin(),d.end());
	for (int i = 0; i < n && succes; i++)
	{
		if (s > d[i].first)
			s += d[i].second;
		else
			succes = 0;
	}
	if (succes)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
