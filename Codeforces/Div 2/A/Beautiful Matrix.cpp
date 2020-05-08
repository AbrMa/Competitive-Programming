#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m[5][5] = {0},i1,j1;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			cin >> m[i][j];
			if (m[i][j] == 1)
			{
				i1 = i;
				j1 = j;
			}
		}
	cout << (abs(2-i1) + abs (2-j1)) << endl;
	return 0;
}
