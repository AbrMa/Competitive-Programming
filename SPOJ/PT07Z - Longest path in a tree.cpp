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

vector<vi> adj;
vector<bool> vis;
vi dis;

void bfs(int x)
{
	queue<int> q;
	vis[x] = true;
	dis[x] = 0;
	q.push(x);
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
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n,u,v;
	cin >> n;
	n++;
	adj.resize(n);
	vis.resize(n);
	dis.resize(n);
	n--;
	for (int i = 1; i < n; i++)
	{
		cin >> u >> v;
		adj[u].PB(v);
		adj[v].PB(u);
	}
	bfs(1);
	int node = 0, maxDis = 0;
	for (int i = 1; i <= n; i++)
	{
		if (dis[i] > maxDis)
		{
			node = i;
			maxDis = dis[i];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		vis[i] = 0;
		dis[i] = 0;
	}
	bfs(node);
	int ans = 0;
	for (int d : dis)
		ans = max(ans, d);
	cout << ans << endl;
	return 0;
}
