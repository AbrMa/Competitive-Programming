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
	int t, n;
	cin >> n >> t >> s;
	while (t--)
	{
		for (int i = 0; i < n ; i++)
		{
			if (i < n - 1 && s[i] == 'B')
				if (s[i + 1] == 'G')
				{
					swap(s[i], s[i + 1]);
					i++;
				}
		}
	}
	cout << s << endl;
	return 0;
}
