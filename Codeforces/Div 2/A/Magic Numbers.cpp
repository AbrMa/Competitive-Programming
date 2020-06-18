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
	int tam,ans = 1;
	string n;
	cin >> n;
	tam = n.size();
	n.append("....");
	for (int i = 0; i < tam && ans; i++)
	{
		if (n[i] != '1') ans = 0;
		if (n[i] == '1' && n[i+1] == '4' && n[i+2] == '4') i+=2;
		else if (n[i] == '1' && n[i+1] == '4') i++;
	}	
	if (ans) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
