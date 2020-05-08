#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	if (n == 1 || m == 1)
	       cout << "Akshat" << endl;
	else
	{
		if (min(n,m) % 2 == 0)
			cout << "Malvika" << endl;
		else
	       		cout << "Akshat" << endl;
	}	
	return 0;
}
