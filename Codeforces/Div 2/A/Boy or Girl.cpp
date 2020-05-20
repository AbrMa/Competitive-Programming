#include <iostream>
#include <string>
using namespace std;
int main()
{
	int abc[26] = {0},ans=0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		abc[s[i] - 'a']++;
	for (int i = 0; i < 26; i++)
		if (abc[i]) ans++;
	if (ans % 2 == 0) cout << "CHAT WITH HER!" << endl;
	else cout << "IGNORE HIM!" << endl;
	return 0;
}
