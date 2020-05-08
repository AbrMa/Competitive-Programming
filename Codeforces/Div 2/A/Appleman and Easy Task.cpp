#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	char cb[1000][1000] = {'.'};
	int n,flag=1;
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> cb[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			int adj = 0;
			if (cb[i][j+1] == 'o') adj++;
			if (cb[i+1][j] == 'o') adj++;
			if (cb[i][j-1] == 'o') adj++;
			if (cb[i-1][j] == 'o') adj++;
			if (adj % 2 == 1)
				flag = 0;
		}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
