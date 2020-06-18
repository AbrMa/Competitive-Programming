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
	int n, m, ans = 0;
	cin >> n >> m;
	for (int a = 0; a <= 1000; a++)
	       for (int b = 0; b <= 1000; b++)
		{
			bool eq1 = (a * a) + b == n;
			bool eq2 = a + (b * b) == m;
			if (eq1 && eq2) ans++;
		}	       
	cout << ans << endl;
	return 0;
}
