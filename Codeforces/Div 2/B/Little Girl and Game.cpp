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
	int abc[26] = {0}, k = 0;
	for (auto c : s)
		abc[c - 'a']++;
	for (int i = 0; i < 26; i++)
		k += abc[i] % 2;
	if (k == 0 || k == 1) cout << "First\n";
	else if (k % 2) cout << "First\n";
	else cout << "Second\n";
	return 0;
}
