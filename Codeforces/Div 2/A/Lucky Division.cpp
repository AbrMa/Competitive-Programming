#include <bits/stdc++.h>
using namespace std;
int is_lucky(int n)
{
	int four=0,seven=0;
	string l = to_string(n);
	for (int i = 0; i < l.size(); i++)
	{
		if (l[i] == '4')
			four++;
		else if (l[i] == '7')
			seven++;
	}
	if (four + seven == l.size())
		return 1;
	return 0;
}
int main()
{
	int n,isAlmost = 0;
	cin >> n;
	for (int i = 4; i <= 777; i++)
		if (is_lucky(i) && n % i == 0)
			isAlmost = 1;
	if (isAlmost)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
