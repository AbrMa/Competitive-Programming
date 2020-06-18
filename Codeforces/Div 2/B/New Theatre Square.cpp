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
	int t,n,m,x,y;
	cin >> t;
	while (t--)
	{
		cin >> n >> m >> x >> y;
		int ans = 0;
		while (n--)
		{
			string s;
			cin >> s;
			s.append("***");
			for (int i = 0; i < m; i++)
			{
				if (s[i] == '.' && s[i+1] == '.')
				{
					ans += min(2*x,y);
					i++;
				}
				else if (s[i] == '.') ans += x;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
