#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,lo=0,ro=0,ans=0;
	cin >> n;
	vector<int> l(n),r(n);
	for (int i = 0;i < n; i++)
		cin >> l[i] >> r[i];
	for (int i = 0; i < n; i++)
	{
		if (l[i]) lo++;
		if (r[i]) ro++;
	}
	ans += min(lo,n-lo);
	ans += min(ro,n-ro); 
	cout << ans << endl;
	return 0;
}
