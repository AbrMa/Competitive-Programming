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
	int n, c = 0;
	cin >> n;
	vi ans(n);
	for (int i = n - 1; i >= 0; i--)
	{
		ans[i] = 10000000 - c;
		c++;
	}
	for (auto a : ans) cout << a << " ";
	return 0;
}
