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
		cin >> n;
		vi a(n);
		int ans = 0, elem1 = 0, elem2 = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (i % 2 != a[i] % 2)
			{
				if (a[i] % 2) elem1++;
				else elem2++;
			}
		}
		if (elem1 == elem2) cout << elem1 << endl;
		else cout << "-1" << endl;
	}
	return 0;
}