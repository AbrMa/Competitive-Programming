#include <iostream>
using namespace std;
int main()
{
	int grid[5][5],times_pressed;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			grid[i][j] = 1;
	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= 3; j++)
		{
			cin >> times_pressed;
			if (times_pressed % 2 == 1)
			{
				grid[i][j] = !grid[i][j];
				grid[i-1][j] = !grid[i-1][j];
				grid[i+1][j] = !grid[i+1][j];
				grid[i][j-1] = !grid[i][j-1];
				grid[i][j+1] = !grid[i][j+1];
			}	
		}
	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= 3; j++)
		{
			cout << grid[i][j];
			if (j == 3) cout << endl;
		}
	return 0;
}
