#include <iostream>
#include <string>
using namespace std;
int main () {
	int t;
	cin >> t;	
	while (t--) {
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (i % 2 == 0) {
				for (int j = 'a'; j <= 'z'; j++) {
					if (s[i] != char(j)) {
						s[i] = char(j);
						break;
					}
				}
			}
			else {
				for (int j = 'z'; j >= 'a'; j--) {
					if (s[i] != char(j)) {
						s[i] = char(j);
						break;
					}
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}
