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
	string s1,s2;
	cin >> s1 >> s2;
	if (s1.size() == s2.size())
	{
		int i, j;
		for (i = 0; i < s1.size(); i++)
			if (s1[i] != s2[i]) break;
		for (j = i + 1; j < s1.size(); j++)
			if (s2[j] != s1[j]) break;
		swap(s1[i], s1[j]);
		if (s1 == s2) cout << "YES\n";
		else cout << "NO\n";
	}
	else cout << "NO\n";
	return 0;
}
