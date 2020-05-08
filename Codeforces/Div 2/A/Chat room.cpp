#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h = 0, e = 0, l1 = 0, l2 = 0, o = 0,i = 0;
	string s;
	cin >> s;
	for (; i < s.size() && !h; i++)
		if (s[i] == 'h')
			h = 1;
	for (; i < s.size() && !e; i++)
		if (s[i] == 'e')
			e = 1;
	for (; i < s.size() && !l1; i++)
		if (s[i] == 'l')
			l1 = 1;
	for (; i < s.size() && !l2; i++)
		if (s[i] == 'l')
			l2 = 1;
	for (; i < s.size() && !o; i++)
		if (s[i] == 'o')
			o = 1;
	if (h && e && l1 && l2 && o)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
