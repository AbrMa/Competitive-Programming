#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int k,l,m,n,d,ans=0;
	cin >> k >> l >> m >> n >> d;
	vector<bool> drag(d+1,false);
	for (int i = 1; i <= d; i++)
	{
		if (i % k == 0) drag[i] = true;
		if (i % l == 0) drag[i] = true;
		if (i % m == 0) drag[i] = true;
		if (i % n == 0) drag[i] = true;
	}
	for (int i = 1; i <= d; i++)
		if (drag[i]) ans++;
	cout << ans << endl;
	return 0;
}
