#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first 
#define S second 
#define PB push_back 
#define MP make_pair
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int k, abc[26] = {0}, t[26] = {0};
	string s, ans;
	cin >> k >> s;
	for (int i = 0; i < s.size(); i++)
		abc[s[i] - 'a']++;
	bool possible = true;
	for (int i = 0; i < 26; i++)
	{
		if (abc[i] % k == 0)
			t[i] = abc[i] / k;
		else
			possible = false;	
	}
	if (possible)
	{
		for (int i = 0; i < 26; i++)
			if (t[i])
				for (int j = 1; j <= t[i]; j++)
					ans.PB(char(i+'a'));
		while (k--) cout << ans;
		cout << endl;
	}
	else cout << "-1" << endl;
	return 0;
}
