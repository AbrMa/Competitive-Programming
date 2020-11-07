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
	int n;
	string num;
	cin >> n >> num;
	vi a(n), b(n);
	for (int i = 0; i < n; i++)
	{
		a[i] = int(num[i] - '0');
		b[i] = int(num[i+n] - '0');
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	bool less = true, great = true;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= b[i]) less = false;
		if (a[i] <= b[i]) great = false;
	}
	if (less || great) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
