#include <iostream>
#include <vector>
#include <string>
using namespace std;
int minD(long long int n)
{
	int minN = 10;
	string s = to_string(n);
	for (int i = 0; i < s.size(); i++)
		minN = min(minN, s[i] - '0');
	return minN;
}
int maxD(long long int n)
{
	int maxN = -1;
	string s = to_string(n);
	for (int i = 0; i < s.size(); i++)
		maxN = max(maxN, s[i] - '0');
	return maxN;
}
int main()
{
	long long int t,a,k;
	cin >> t;
	while (t--)
	{
		cin >> a >> k;
		for (int i = 2; i <= k; i++)
		{
			a = a + maxD(a) * minD(a);
			if (maxD(a) == 0 || minD(a) == 0)
				break;
		}
		cout << a << endl;
	}
	return 0;
}
