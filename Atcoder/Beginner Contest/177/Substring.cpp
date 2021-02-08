#include <iostream>
#include <string>
using namespace std;
int main () {
	int mnc = 1000;
	string s, t;
	cin >> s >> t;
	for (int i = 0; i < s.size(); i++) {
		if (i + t.size() <= s.size() ) {
			int delta = 0, k = 0;
			for (int j = i; j < i + t.size(); j++) {
				if (s[j] != t[k])
					delta++;
				k++;
			}
			mnc = min(mnc, delta);
		}
	}
	cout << mnc << endl;
	return 0;
}
