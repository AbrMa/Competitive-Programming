#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,c,ans=0;
	cin >> n >> c;
	vector<int> x(n);
	for (int i = 0; i < n; i++)
		cin >> x[i];
	x.push_back(10000);
	for (int i = 0; i < n; i++)
		if (x[i] >= x[i+1] + c)
			ans = max(ans, x[i] - (x[i+1] + c));
	cout << ans << endl;
	return 0;
}
