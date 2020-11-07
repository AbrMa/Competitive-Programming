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
	int n, num[8] = {0}, aux, m;
	cin >> n;
	m = n;
	while (m--)
	{
		cin >> aux;
		num[aux]++;
	}
	bool con1 = ((n / 3) == num[1]);
	bool con2 = num[6] - num[3] >= 0 && num[6] + num[4] - num[3] == num[2]; 
	bool con3 = num[5] == 0 && num[7] == 0;
	if (con1 && con2 && con3)
	{
		while (num[1] && num[2] && num[4])
		{
			num[1]--, num[2]--, num[4]--;
			cout << "1 2 4\n";
		}
		while (num[1] && num[2] && num[6])
		{
			num[1]--, num[2]--, num[6]--;
			cout << "1 2 6\n";
		}
		while (num[1] && num[3] && num[6])
		{
			num[1]--, num[3]--, num[6]--;
			cout << "1 3 6\n";
		}
	}
	else cout << "-1\n";
	return 0;
}
