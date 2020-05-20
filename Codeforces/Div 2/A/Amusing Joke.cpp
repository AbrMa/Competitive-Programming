#include <iostream>
#include <string>
using namespace std;
int main()
{
	int abc[26] = {0},ans=1; 
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	for (int i = 0; i < s1.size(); i++)
		abc[s1[i] - 'A']++;
	for (int i = 0; i < s2.size(); i++)
		abc[s2[i] - 'A']++;
	for (int i = 0; i <  s3.size(); i++)
		abc[s3[i] - 'A']--;
	for (int i = 0; i < 26; i++)
		if (abc[i] != 0) ans = 0;
	if (ans) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
