#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,flag=1,ans=0,mymoney=0;
	cin >> n;
	vector<int> coin(n);
	for (int i = 0; i < n; i++)
	{
		cin >> coin[i];
		sum += coin[i];
	}
	sort(coin.rbegin(),coin.rend());
	for (int i = 0; i < n && flag; i++)
	{
		sum -= coin[i];
		mymoney += coin[i];
		ans++;
		if (mymoney > sum)
			flag = 0;
	}
	cout << ans << endl;
	return 0;
}
