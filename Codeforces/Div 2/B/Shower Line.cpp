#include <iostream>
#include <vector>
using namespace std;
int g[5][5], ans = 0;
vector<int> elements = {0,1,2,3,4}, p;
vector<bool> chosen(5);
void search() {
	if (p.size() == elements.size()) {
		int gain = g[p[0]][p[1]] + g[p[1]][p[0]] + g[p[2]][p[3]] + g[p[3]][p[2]] + g[p[1]][p[2]] + g[p[2]][p[1]] + g[p[3]][p[4]] + g[p[4]][p[3]] + g[p[2]][p[3]] + g[p[3]][p[2]] + g[p[3]][p[4]] + g[p[4]][p[3]];
		ans = max(ans, gain);
	} else {
		for (int i = 0; i < elements.size(); i++) {
			if (chosen[i]) continue;
			chosen[i] = true;
			p.push_back(elements[i]);
			search();
			chosen[i] = false;
			p.pop_back();
		}
	}
}
int main() {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> g[i][j];
	search();
	cout << ans << endl;
	return 0;
}
