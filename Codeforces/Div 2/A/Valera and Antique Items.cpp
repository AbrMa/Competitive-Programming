#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> deals;
	int n,v,k,ans=0,i=1;
	cin >> n >> v;
	while (n--)
	{
		cin >> k;
		vector<int> item(k);
		for (int i = 0; i < k; i++)
			cin >> item[i]; 
		sort(item.begin(),item.end());
		if (v > item[0])
		{
			ans++;
			deals.push_back(i);
		}
		i++;
	}
	if (ans == 0)
		cout << "0" << endl;
	else
	{
		cout << ans << endl;
		for (int i = 0; i < deals.size(); i++)
		{
			cout << deals[i];
			if (i == deals.size() - 1)
				cout << endl;
			else
				cout << " ";
		}
	}
	return 0;
}
