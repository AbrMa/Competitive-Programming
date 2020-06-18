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
	int n = s.size();
	bool danger = false;
	s.append("..........");
	for (int i = 0; i < n; i++)
	{
		bool con1 = s[i] == s[i+1];
		bool con2 = s[i] == s[i+2];
		bool con3 = s[i] == s[i+3];
		bool con4 = s[i] == s[i+4];
		bool con5 = s[i] == s[i+5];
		bool con6 = s[i] == s[i+6];
		if (con1 && con2 && con3 && con4 && con5 && con6)
			danger = true;
	}	
	if (danger) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
