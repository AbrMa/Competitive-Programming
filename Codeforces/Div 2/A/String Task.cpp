#include <bits/stdc++.h>
using namespace std;
char vowels[12] = {'A','a','O','o','Y','y','E','e','U','u','I','i'};
int is_a_vowel(char a)
{
	for (int i = 0; i < 12; i++)
		if (a == vowels[i])
			return 1;
	return 0;
}
int main()
{
	string s,ans;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		if (!is_a_vowel(s[i]))
		{
			cout << ".";
			if ('A' <= s[i] && s[i] <= 'Z')
				cout << char((int)s[i] + 32);
			else
				cout << s[i];
		}
	cout << endl;
	return 0;
}
