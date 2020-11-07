#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	int t,n,m;
	cin >> t;
	while (t--)
	{
		cin  >> n >> m;
		int ans = n * m;
		if (ans % 2 == 1) ans++;
		cout << (ans/2) << endl;
	}
	return 0;
}
