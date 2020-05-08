#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,ans,mit;
	cin >> n >> k;
	if (n % 2 == 0)
		mit = n/2;
	else
		mit = (n+1)/2;
	if (k <= mit)
		ans = 2 * k - 1;
	else
	{
		ans = 2 * k - n; 
		if (n % 2 == 1)
			ans--;
	}	
	cout << ans << endl;
	return 0;
}