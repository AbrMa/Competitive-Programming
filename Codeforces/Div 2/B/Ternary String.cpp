#include <iostream>
#include <string>
using namespace std;
int arr[3];
void clean()
{
	for (int i = 0; i < 3; i++) arr[i] = 0;
}
int is_valid()
{
	int v = 1;
	for (int i = 0; i < 3; i++)
		if (arr[i] < 1)
			v = 0;
	return v;
}
int main()
{
	int t;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> s;
		clean();
		int ans = INT_MAX, l = 0, r = 0;
		arr[s[0] - '1']++;
		while (l < s.size() && r < s.size())
		{
			if (is_valid())
			{
				ans = min(ans, r-l+1);
				arr[s[l] - '1']--;
				l++;
			}
			else
			{	
				r++;
				if (r < s.size())
					arr[s[r] - '1']++;
			}
		}
		if (ans == INT_MAX) cout << "0" << endl;
		else cout << ans << endl;
	}
	return 0;
}
