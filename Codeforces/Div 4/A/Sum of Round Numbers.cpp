#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
	int t,n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int> ans;
		int dec = 1;
		while (n)
		{
			if (n%10) ans.push_back(n%10*dec);
			n /= 10;
			dec *= 10;
		}
		cout << ans.size() << endl;
		for (int i = 0; i < ans.size(); i++)
		{
			cout << ans[i];
			if (i < ans.size() - 1) cout << " ";
			else cout << endl;
		}
	}
	return 0;
}
