#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first 
#define S second 
#define PB push_back 
#define MP make_pair
void dfs(int s, vector< vector<int> > &adj, vector<bool> &vis)
{
	if (vis[s]) return;
	vis[s] = true;
	for (auto u : adj[s]) dfs(u - 1, adj, vis);
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n,aux;
	cin >> n;
	vector<vi> adj(n);
	vector<bool> vis(n);
	adj[0].PB(n);
	for (int i = 1; i < n; i++)
	{
		cin >> aux;
		adj[i].PB(aux);
	}
	dfs(0, adj, vis);
	for (int i = 0; i < n; i++)
	{
		if (vis[i]) 
		{
			cout << (i+1);
			if (i == n - 1) cout << endl;
			else cout << " ";
		}
	}
	return 0;
}
