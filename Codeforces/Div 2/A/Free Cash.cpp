#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main () {
	unordered_map<string,int> t;
	string h,m;
	int n, mx = 0;
	cin >> n;
	while (n--) {
		cin >> h >> m;
		t[h + ":" + m]++;
	}
	for (auto c : t)
		mx = max(c.second, mx);
	cout << mx << endl;
	return 0;
}
