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
	int t,n;
	cin >> t;
	while (t--)
	{
		bool valid = true;
		int p, c, lastP = 0, lastC = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> p >> c;
			if (p < lastP || c < lastC) valid = false;
			if (p - lastP < c - lastC) valid = false;
			lastP = p, lastC = c;
		}
		if (valid) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
