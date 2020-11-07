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
#define MAX 30003 
vector<int> adj[MAX];
bool visited[MAX];
void dfs(int s)
{
	if (visited[s]) return;
	visited[s] = true;
	for (auto u: adj[s]) dfs(u);
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n,t,aux;
	cin >> n >> t;
	for (int i = 1; i < n; i++)
	{
		cin >> aux;
		adj[i].PB(aux + i);
	}
	dfs(1);
	if (visited[t]) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
