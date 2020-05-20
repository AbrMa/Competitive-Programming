#include <iostream>
#include <string>
using namespace std;
int main()
{
	int ans = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'H') ans++;
		if (s[i] == 'Q') ans++;
		if (s[i] == '9') ans++;
	}
	if (ans) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
