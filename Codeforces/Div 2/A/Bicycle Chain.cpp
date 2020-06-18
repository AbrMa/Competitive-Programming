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
	int n, m, rad = -1, ans = 0;
	cin >> n;
	vi A(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];
	cin >> m;
	vi B(m);
	for (int i = 0; i < m; i++)
		cin >> B[i];
	for (auto b : B)
		for (auto a : A)
			if (b % a == 0)
				rad = max(b / a, rad);
	if (rad == -1) cout << "0\n" << endl;
	else
	{
	for (auto b : B)
		for (auto a : A)
			if (b % a == 0 && b / a == rad)
				ans++;
	cout << ans << endl;
	}
	return 0;
}
