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
	int n, l[100003] = {0}, r[100003] = {0}, ans = -1, mxl = 1000000000, mxr  = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> l[i] >> r[i];
		mxl = min(mxl, l[i]);
		mxr = max(mxr, r[i]);
	}
	for (int i = 1; i <= n; i++)
		if (mxl == l[i] && mxr == r[i])
		{
			ans = i;
		       	break;
		}
	cout << ans << endl;
	return 0;
}
