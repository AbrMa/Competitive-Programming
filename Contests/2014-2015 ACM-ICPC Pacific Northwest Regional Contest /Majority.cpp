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
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, aux, votes[1003] = {0};
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> aux;
			votes[aux]++;
		}
		int ans = 0;
		for (int i = 1; i <= 1000; i++)
			ans = max(ans, votes[i]);
		for (int i = 1; i <= 1000; i++)
		{
			if (votes[i] == ans)
			{
				ans = i;
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}