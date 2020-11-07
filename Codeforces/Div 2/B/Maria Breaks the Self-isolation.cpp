#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	int t,n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.rbegin(),a.rend());
		for (int i = 0; i < a.size(); i++)
		{
			if (n >= a[i]) break;
			else n--;
		}
		cout << (n+1) << endl;
	}
	return 0;
}
