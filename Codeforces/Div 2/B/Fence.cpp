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
	int n, j = 0, k, msum = INT_MAX, l , r, sum = 0;
	cin >> n >> k;
	vi h(n);
	for (int i = 0; i < n; i++) cin >> h[i];
	for (int i = 0; i < k; i++) sum += h[i];
	msum = sum;
	l = 0, r = k - 1;
	while (r < n - 1)
	{
		sum -= h[l];
		l++, r++;
		sum += h[r];	
		if (sum < msum)
		{
			msum = sum;
			j = l;
		}
	}
	cout << (j + 1) << endl;
	return 0;
}
