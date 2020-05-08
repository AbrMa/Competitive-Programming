#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int n,m,pt=0;
	cin >> n >> m;
	string a,b;
	for (int i = 0; i < m; ++i)
	{
		a.push_back('#');
		if (i < m - 1) b.push_back('.');
		else b.push_back('#');
	}
	while (pt < n)
	{
		cout << a << endl;
		pt++;
		if (pt < n)
		{
			cout << b << endl;
			reverse(b.begin(),b.end());
			pt++;
		}
	}
	return 0;
}