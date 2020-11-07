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
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int h[500] = {0}, l[500] = {0};
	for (int i = 0; i < s1.size(); i++) 
		if (s1[i] != ' ') h[s1[i]]++;
	for (int i = 0; i < s2.size(); i++)
		if (s2[i] != ' ') l[s2[i]]++;
	bool valid = true;
	for (int i = 0; i < 500; i++)
		if (h[i] < l[i]) valid = false;
	if (valid) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
