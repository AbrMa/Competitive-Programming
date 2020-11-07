#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first 
#define S second 
#define PB push_back 
#define MP make_pair
char board[103][103];
void clean()
{
	for (int i = 0; i < 103; i++)
		for (int j = 0; j < 103; j++)
			board[i][j] = '\0';
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	clean();
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m;  j++)
			cin >> board[i][j];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (board[i][j] == '.')
			{
				if (i % 2)
				{
					if (j % 2) cout << "B";
					else cout << "W";
				}
				else
				{
					if (j % 2) cout << "W";
					else cout << "B";
				}
			}
			else cout << "-";
		}
		cout << endl;
	}
	return 0;
}
