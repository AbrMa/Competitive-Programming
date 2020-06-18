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
void print(vector<bool> &a)
{
	for (auto A : a)
		cout << A << " ";
	cout << endl;
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n,a,b, ans = 0;
	cin >> n >> a >> b;
	vector<bool> pos(n, true);
	for (int i = 0; i < a; i++)
		pos[i] = false;
	for (int i = a + b + 1; i < n; i++)
		pos[i] = false;
	for (auto p : pos)
		if (p) ans++;
	cout << ans << endl;
	return 0;
}
