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
	int ans = 1;
	string s1,s2;
	cin >> s1 >> s2;
	reverse(s2.begin(),s2.end());
	if (s1.size() == s2.size())
	{
		for (int i = 0; i < s1.size() && ans; i++)
			if (s1[i] != s2[i]) ans = 0;	
		if (ans) cout << "YES" << endl;
	}
	if (ans == 0 || s1.size() != s2.size()) cout << "NO" << endl;
	return 0;
}
