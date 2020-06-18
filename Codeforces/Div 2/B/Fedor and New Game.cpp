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
int is_friend(int a, int b, int k)
{
	int c = a ^ b, i = 0;
	while (c)
	{
		i += c & 1;
		c = c >> 1;
	}
	if (i <= k) return 1;
	return 0;
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n,m,k,ans=0,p;
	cin >> m >> n >> k;
	vi num(n);
	for (int i = 0; i < n; i++) cin >> num[i];
	cin >> p; 
	for (int i = 0; i < n; i++) ans += is_friend(p,num[i],k);
	cout << ans << endl;
	return 0;
}
