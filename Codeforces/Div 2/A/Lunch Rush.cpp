#include <iostream>
using namespace std;
int main()
{
	long long int n,k,ans=LONG_MIN,f,t;
	cin >> n >> k;
	while (n--)
	{
		cin >> f >> t;
		if (t <= k)
			ans = max(ans,f);
		else
			ans = max(ans,f-(t-k));
	}
	cout << ans << endl;
	return 0;
}
