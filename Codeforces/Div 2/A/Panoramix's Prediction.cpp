#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	vector<int> nums,p;
	for (int i = n + 1; i <= m; i++) nums.push_back(i);
	for (int i = 0; i < nums.size(); i++)
	{
		int q = 0;
		for (int j = 2; j < nums[i]; j++)
			if (nums[i] % j == 0) q++;
		if (q == 0) p.push_back(nums[i]);
	}

	if (p.size() == 0) cout << "NO" << endl;
	else  if (p[0] != m) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}
