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
void dfs(int s, vector<vi> &adj, int &dn)
{
	if (s == -1) return;
	dn++;
	for (auto u : adj[s]) dfs(u, adj, dn);
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n,aux,ans=1;
	cin >> n;
	vector<vi> adj(n+1);
	for (int i = 1; i <= n; i++)
	{
		cin >> aux;
		adj[i].PB(aux);	
	}
	for (int i = 1; i <= n; i++) 
	{
		int dn = 1;
		for (auto a : adj[i]) dfs(a, adj, dn);
		ans = max(ans, dn);
	}
	cout << ans << endl;
	return 0;
}
