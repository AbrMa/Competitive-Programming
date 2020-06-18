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
	int n,m,flag=0;
	cin >> n >> m;
	if (m < n)
	{
		swap(m,n);
		flag=1;
	}
	vector<vi> adj(2*m + 1);
	vector<bool> vis(2*m + 1);
	vi dis(2*m + 1);
	queue<int> q;
	for (int i = 1; i <= 2*m; i++)
	{
		if (i - 1 > 0) adj[i].PB(i - 1);
		if (2*i <= 2*m) adj[i].PB(2*i);
	}
	if (flag) swap(n,m);
	vis[n] = true;	
	dis[n] = 0;
	q.push(n);
	while (!q.empty())
	{
		int s = q.front(); 
		q.pop();
		for (auto u : adj[s])
		{
			if (vis[u]) continue;
			vis[u]  = true;
			dis[u] = dis[s] + 1;
			q.push(u);
		}
	}
	cout << dis[m] << endl;
	return 0;
}
