#include <iostream>
using namespace std;
char arr[10][10];
bool check(char c, int i, int j)
{
	bool cond1 = (c == arr[i][j+1] && c == arr[i+1][j+1] && c == arr[i+1][j]);
	bool cond2 = (c == arr[i+1][j] && c == arr[i+1][j-1] && c == arr[i][j-1]);
	bool cond3 = (c == arr[i][j-1] && c == arr[i-1][j-1] &&  c == arr[i-1][j]);
	bool cond4 = (c == arr[i-1][j] && c == arr[i-1][j+1] && c == arr[i][j+1]);
	if (cond1 || cond2 || cond3 || cond4) return true;
	else return false;
}
int main() {
	bool ans = false;
	//fill matrix with 'a'
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			arr[i][j] = 'a';
	// read iq test
	for (int i = 1; i <= 4; i++)
		for (int j = 1; j <= 4; j++)
			cin >> arr[i][j];

	for (int i = 1; i <= 4 && ans == false; i++)
		for (int j = 1; j <= 4 && ans == false; j++)
			if(check('.', i, j) || check('#', i, j))
			{
				ans = true;
				break;
			}
	if (ans) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
