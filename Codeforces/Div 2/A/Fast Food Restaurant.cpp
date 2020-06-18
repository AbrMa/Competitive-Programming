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
	int t,a,b,c;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c;
		if (a < b) swap(a,b);
		if (a < c) swap(a,c);
		if (b < c) swap(b,c);
		int ans = 0;
		if (a) a--, ans++;
		if (b) b--, ans++;
		if (c) c--, ans++;
		if (a && b) a--, b--, ans++;
		if (a && c) a--, c--, ans++;
		if (b && c) b--, c--, ans++;
		if (a && b && c) ans++;
		cout << ans << endl;	
	}
	return 0;
}
