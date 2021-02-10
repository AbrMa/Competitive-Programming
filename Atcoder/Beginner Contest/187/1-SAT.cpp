#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;
int main () {
	set<string> a;
	string s1, s2;
	int n;
	cin >> n;
	vector<string> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		a.insert(s[i]);
	}
	for (string t : s) {
		if (t[0] == '!') {
			s1 = t;
			s2 = t.substr(1,t.size());
		}
		else {
			s1 = "!";
			s1 += t;
			s2 = t;
		}
		if (a.count(s1) && a.count(s2)) {
			cout << s2 << endl;
			return 0;
		}
	}
	cout << "satisfiable\n";
	return 0;
}
