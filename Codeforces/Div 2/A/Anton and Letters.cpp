#include <bits/stdc++.h>
using namespace std;
int main()
{
	int abc[27] = {0}, ans = 0;
	string s;
	getline(cin,s);
	for (int i = 0; i < s.size(); i++)
		if ('a' <= s[i] && s[i] <= 'z')
			abc[(int)(s[i] - 'a')]++;
	for (int i = 0; i < 27; i++)
		if (abc[i])
			ans++;
	cout << ans << endl;
	return 0;
}
