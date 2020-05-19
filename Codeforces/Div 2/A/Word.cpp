#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int up = 0, low = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (tolower(s[i]) == s[i]) low++;
		else up++;
	}
	if (up <= low)
		for (int i = 0; i < s.size(); i++) cout << (char)tolower(s[i]);
	else
		for (int i = 0; i < s.size(); i++) cout << (char)toupper(s[i]);
	return 0;
}
