#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first 
#define S second 
#define PB push_back 
#define MP make_pair
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	long long int t,a,b;
	cin >> t;
	while (t--)
	{
		int c = 0;
		cin >> a >> b;
		if (a == b) cout << "0\n";
		else
		{
			if (a < b)
			{
				while (a < b)
				{
					a *= 2;
					c++;
				}
			}
			else
			{
				while (b < a)
				{
					if (a % 2 == 1) break;
					a /= 2;
					c++;
				}
			}
			int ans = 0;
			while (c - 3 >= 0)
			{
				ans++;
				c -= 3;
			}
			while (c - 2 >= 0)
			{
				ans++;
				c -= 2;
			}
			while (c - 1 >= 0)
			{
				ans++;
				c -= 1;
			}
			if (b == a) cout << ans << endl;
			else cout << "-1" << endl;
		}
	}
	return 0;
}
