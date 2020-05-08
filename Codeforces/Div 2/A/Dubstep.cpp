#include <bits/stdc++.h>
using namespace std;
int main()
{
	int space = 0,n,w=0;
	string s;
	cin >> s;
	n = s.size();
	s.append("..........");
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
		{
			i += 2;
			if (w)
				space = 1;
		}
		else
		{
			w = 1;
			if (space)
				cout << " ";
			cout << s[i];
			space = 0;
		}
	}
	cout << endl;
	return 0;
}
