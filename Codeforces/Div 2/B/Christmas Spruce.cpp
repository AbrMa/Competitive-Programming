#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include <set>
#include <algorithm>
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
	int n;
	bool spurce = true;
	cin >> n;
	n++;
	vector<vi> adj(n);
	n--;
	for (int i = 1; i <= n - 1; i++)
	{
		int parent, child;
		cin >> parent;
		child = 1 + i;
		adj[parent].PB(child);
	}
	for (int i = 1; i <= n; i++)
		if (adj[i].size() > 0)
		{
			int leafs = 0;
			for (int a : adj[i])
				if (adj[a].size() == 0)
					leafs++;
			if (leafs < 3) spurce = false;
		}
	if (spurce) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}