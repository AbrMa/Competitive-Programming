#include <iostream>
#include <string>
using namespace std;
int count_ln(long long int n)
{
	string s = to_string(n);
	int ans = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == '7' || s[i] == '4')
			ans++;
	return ans;
}
bool is_lucky(long long int n)
{
	bool is_valid = true;
	string s = to_string(n);
	for (int i = 0; i < s.size(); i++)
		if (s[i] != '7' && s[i] != '4')
			is_valid = false;
	return is_valid;
}
int main()
{
	long long int n, ld = 0;
	cin >> n;
	ld = count_ln(n);
	if (is_lucky(ld)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
