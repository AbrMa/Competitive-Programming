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
	string s;
	cin >> s;
	if (s[0] == '0') for (int i = 1; i < s.size(); i++) cout << s[i];
	else
	{
		int in = 0;
		for (int i = 1; i < s.size() && in == 0; i++)
			if (s[i] == '0') in = i;
		if (in)
		{
			for (int i = 0; i < s.size(); i++)
				if (i != in) cout << s[i];
		}
		else for (int i = 1; i < s.size(); i++) cout << s[i];
	}
	return 0;
}
