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
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		if (s.size() <= 2) cout << s;
		else
		{
			for (int i = 0; i < s.size(); i++)
			{
				if (i == 0 || i == s.size() - 1) cout << s[i];	
				else if ((i + 1) % 2 == 1) cout << s[i];
			}
		}
		cout << endl;
	}
	return 0;
}
