#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first 
#define S second 
#define PB push_back 
#define MP make_pair
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n,d;
	string s;
	cin >> n >> d >> s;
	vector<vi> adj(n);
	vector<bool> vis(n,false);
	queue<int> q;
	vi dis(n);
	for (int i = 0; i < n; i++)
		for (int j = 1; j <= d; j++)
			if (i + j <= n - 1)
				if (s[i] == '1' && s[i+j] == '1') adj[i].PB(i+j);
	vis[0] = true;
	dis[0] = 0;
	q.push(0);
	while (!q.empty())
	{
		int s = q.front();
		q.pop();
		for (auto u : adj[s])
		{
			if (vis[u]) continue;
			vis[u] = true;
			dis[u] = dis[s] + 1;
			q.push(u);
		}
	}
	if (vis[n-1] == true) cout << dis[n-1] << endl;
	else cout << "-1" << endl;
	return 0;
}
