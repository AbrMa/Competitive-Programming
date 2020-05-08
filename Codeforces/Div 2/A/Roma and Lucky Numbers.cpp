#include <iostream>
#include <string>
using namespace std;
int more_than_k(string s,int k)
{
	int lucky_n = 0;
	for (int i = 0; i < s.size(); i++)
	       if (s[i] == '4' || s[i] == '7')
			lucky_n++;	       
	if (lucky_n <= k) 
		return 1;
	return 0;
}
int main()
{
	int n,k,ans=0;
	string s;
	cin >> n >> k;
	while (n--)
	{
		cin >> s;
		ans += more_than_k(s,k);
	}
	cout << ans << endl;
	return 0;
}
