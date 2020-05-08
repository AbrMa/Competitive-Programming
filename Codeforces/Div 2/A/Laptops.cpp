#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	int n,exist=0;
	cin >> n;
	vector< pair<int,int> > lap(n);
	for (int i = 0; i < n; i++)
		cin >> lap[i].first >> lap[i].second;
	sort(lap.begin(),lap.end());
	for (int i = 1; i < n; i++)
		if (lap[i-1].second > lap[i].second)
			exist = 1;
	if (exist)
		cout << "Happy Alex" << endl;
	else
		cout << "Poor Alex" << endl;
	return 0;
}
