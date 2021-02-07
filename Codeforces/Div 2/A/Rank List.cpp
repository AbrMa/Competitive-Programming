#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
bool cmp (pair<int,int> a, pair<int,int> b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first > b.first;
}
int main () {
	int n, k, t, p, ans = 0;
	cin >> n >> k;
	vector<pair<int,int>> team(n);
	for (int i = 0; i < n; i++)
		cin >> team[i].first >> team[i].second;
	sort(team.begin(), team.end(), cmp);
	k--;
	p = team[k].first;
	t = team[k].second;
	for (int i = 0; i < n; i++)
		if (team[i].first == p && team[i].second == t)
			ans++;
	cout << ans << endl;
	return 0;
}
