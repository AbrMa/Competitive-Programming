#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,d,jk=0,min=0;
	cin >> n >> d;
	vector<int> t(n);
	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
		if (i < n-1)
		{
			min += t[i] + 10;
			jk += 2;
		}
		else
			min += t[i];
	}
	if (min <= d)
	{
		d -= min;
		jk += d / 5;
		cout << jk << endl;
	}
	else
		cout << "-1" << endl;
	return 0;
}
