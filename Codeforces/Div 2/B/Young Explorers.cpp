#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int t,n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int> e(n);
		for (int i = 0; i < n; i++)
			cin >> e[i];
		sort(e.begin(),e.end());
		int teams = 0, team_members = 0;
		for (int i = 0; i < n; i++)
		{
			team_members++;	
			if (e[i] <= team_members)
			{
				teams++;
				team_members = 0;
			}
		}
		cout << teams << endl;
	}
	return 0;
}
