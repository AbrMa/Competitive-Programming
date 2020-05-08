#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	char grid[10][10]; 
	int r,c,ans=0;
	cin >> r >> c;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> grid[i][j];	
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
		{
			int hs = 0, vs = 0;
			for (int k = 0; k < c; k++)
				if (grid[i][k] == 'S')
					hs = 1;
			for (int k = 0; k < r; k++)
				if (grid[k][j] == 'S')
					vs = 1;
			if (hs == 0)
				for (int k = 0; k < c; k++)
				{
					if (grid[i][k] == '.')
						ans++;
					grid[i][k] = 'x';
				}
			else if (vs == 0)
				for (int k = 0; k < r; k++)
				{
					if (grid[k][j] == '.')
						ans++;
					grid[k][j] = 'x';
				}

		}
	cout << ans << endl;
	return 0;
}
